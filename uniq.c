#include <stdio.h>
#include <string.h>
#define NR(x)  sizeof(x)/sizeof(x[0])
int Del_char(const char *input, char *output)
{
    int i , j , k = 0;
    int flag ;
    int len ;
    //判断输入输出的字符串数组是否为空 
    if(input == NULL  || output == NULL)
    {
        //如果为空，返回错误码 
        return -1 ; 
    }
    //用查询的方法遍历数组的每一个元素 
    for(i = 0 ; i < NR(input) ; i++)
    {
        //把标志位置一 
        flag =1 ;
        //在遍历一遍数组，这个for用来与上面的进行比较，如果出现相同的
        //就把标志位置0 
        for(j = 0 ; j < i ; j++)
        {
            if(input[i] == input[j])
                flag = 0 ;      
        }    
        //如果标志位被置1，表示没有重复的元素，这时候，将不重复的元素
        //从数组的首元素的地方开始往后排列 
        if(1 == flag){
            output[k++] = input[i] ; 
        }
    }
    //最后加一个伪0作为结束 
    output[k] = '\0' ; 
    puts(output);        
    return 0 ;
}
 
 
int main()
{
     char str_input[10];
     char str_output[10]={"0"};
     printf("请输入你的字符串：");
     scanf("%s",&str_input);
     Del_char(str_input,str_output);
     getchar();
     getchar();
     return 0 ;
}

