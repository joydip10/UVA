#include<bits/stdc++.h>

using namespace std;
struct structure
{
    string name;
    double price;
    int complaince;
    vector<string>met_req;
};
int main()
{
    int n,r, counter=0;
    string dummy;
    while(1)
    {
        cin>>n>>r;
        if(n==0 && r==0)return 0;
        vector<string> req;
        getline(cin,dummy);
        for(int i =0;i<n;i++)
        {
            string s;
            getline(cin,s);
            req.push_back(s);
        }
        //getline(cin,dummy);
        vector<structure* > rlf;
        for(int i =0;i<r;i++)
        {
            structure* p = new structure();

            rlf.push_back(p);
            getline(cin,p->name);
            cin>>p->price;
            cin>>p->complaince;
            getline(cin,dummy);
            for(int j=0;j<p->complaince;j++)
            {
                string s;
                getline(cin,s);
                p->met_req.push_back(s);
            }
        }
        int max_complaince=-1;
        for(vector<structure* >::iterator p=rlf.begin();p!=rlf.end();p++)
        {
            max_complaince=max(max_complaince,(*p)->complaince);
        }
        structure* best=NULL;
        for(vector<structure* >::iterator p=rlf.begin();p!=rlf.end();p++)
        {
            structure* current = *p;
            if(best==NULL)
            {
                if(max_complaince==current->complaince) best=current;
            }
            else
            {
                if((max_complaince==current->complaince) && (current->price<best->price)) best=current;
            }
        }
        if(counter != 0)cout<<endl;
        cout<<"RFP #"<<++counter<<endl<<best->name<<endl;
        for(vector<structure*>::iterator p=rlf.begin();p!=rlf.end();p++)
        {
            delete *p;
        }
    }
    return 0;
}
