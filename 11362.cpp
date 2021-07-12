#include<bits/stdc++.h>

using namespace std;

struct node
{
    bool endmask;
    node* next[10+1];
    node(){
        endmask=false;
        for(int i=0;i<10;i++)
        {
            next[i]=NULL;
        }
    }
}* root;

void insert_node(char* str,int len)
{
    node* curr=root;
    for(int i=0;i<len;i++)
    {
        if(curr->next[str[i]-'0']==NULL)
        {
            curr->next[str[i]-'0']=new node();
        }

        curr=curr->next[str[i]-'0'];
    }
    curr->endmask=true;
}

void del(node* curr)
{
    for(int i =0;i<10;i++)
    {
        if(curr->next[i])
        {
            del(curr->next[i]);
        }
    }
    delete(curr);
}

bool search_node(char* str,int len)
{
    node* curr=root;
    for(int i=0;i<len;i++)
    {
        if(curr->next[str[i]-'0']==NULL)
        {
            return false;
        }
        else curr=curr->next[str[i]-'0'];
    }
    return curr->endmask;
}
int count_endmask(char* str,int len)
{
    node* curr=root;
    int counter=0;
    for(int i=0;i<len;i++)
    {
        if(curr->next[str[i]-'0'])
        {
            curr=curr->next[str[i]-'0'];
            if(curr->endmask==true) {
                counter++;
            }
        }
    }

    return counter;
}

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        root=new node();
        int num;
        cin>>num;

        cin.ignore();

        stack<string>str;

        while(num--)
        {
            string strr;
            cin>>strr;

            cin.ignore();

            str.push(strr);

            char ch[50];
            strcpy(ch,strr.c_str());

            insert_node(ch,strlen(ch));
        }

        int counter=0;

        while(!str.empty()){
            char ch[50];
            string s;

            s=str.top();
            str.pop();

            strcpy(ch,s.c_str());

            counter=max(count_endmask(ch,strlen(ch)),counter);
        }
        if(counter>1){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
        del(root);
    }
    return 0;
}

