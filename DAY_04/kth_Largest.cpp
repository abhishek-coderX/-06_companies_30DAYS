// jab bhi aise question aat hai naa kth smallest
// kth largest heap ke bare mein socho thoda

// heap mein values sorted order mein store hoti hai
// min hip and max hip are two types of heap


// largest bola to ---min heap
// smallest bola to ---max heap

// min heap mein ---sabse top pe sabse smallest log
// max heap mein ---sabse top pe bade log hote hai


// story kya bani 

// min heap lelo 
// >k pop karo
// add kar lo and 
// >k hai to pop


class KthLargest {
public: int k;
        priority_queue<int,vector<int>,greater<int>>pq;

    KthLargest(int k, vector<int>& nums) {
     this->k = k; 
             for(int &num:nums)
        {
            pq.push(num);
            if(pq.size()>k)
            {
                pq.pop(); //min elemnt nikal do
            }
        }
    }
    
    int add(int val) {

pq.push(val);

if(pq.size()>k)
{
    pq.pop();
}
return pq.top();
        
    }
};

