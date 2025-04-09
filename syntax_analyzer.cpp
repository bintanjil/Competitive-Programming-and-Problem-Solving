[Tuesday 10:47 AM] TANJIL BIN MOHIUDDIN
#include <bits/stdc++.h>

using namespace std;

int main() {

  int syntax_tree_root, start_variable,top_rule,left_variable; //declaring the variable for root of the syntax tree,start variable of the grammar,top rule for the grammar and left variable;

  int input_token_index,statement_index; //declaring variable for running loop on the input_token string and the statement array

  string input_token; //string for taking the token from lexical analyzer as input

  char statement[7]; //character array for storing the operator and operant from input_token like <id,o><=><id,2><+><id,3> as i,=,i,+,i

  char grammar_rules[6][11] = {"A->BCDEDF.","B->i.","C->=.","D->i.","E->+.","F->;."}; //rule of the grammar for syntax tree

  char variable_replacer[50];//array for replace the value of grammar

  char syntax_tree[50];//array for syntax tree

  int children_counter[50];//array for counting the children of the tree

  cout<< "Enter the input token:";

  getline (cin, input_token); //taking input for the input token

  cout<< "The entered token was:"<<input_token<<endl;

  statement_index=0;

  // loop for storing the operator and operant in the statement array from input_token

  for(input_token_index=0;input_token_index<input_token.length();input_token_index++){

      if(input_token[input_token_index]=='<'){ //we will get the operator and operant after < from the input_token

          statement[statement_index] = input_token[input_token_index+1]; //storing operator and operant in statement array

          statement_index++; //increasing the value on index by one

      }

  }

  for(statement_index=0;statement_index<6;statement_index++)

{

    cout<<statement[statement_index];

}

//initializes the syntax tree root, start variable, top rule, and left variable.

  syntax_tree_root=0; //root of the syntax tree

  start_variable=0; //start index of variable replacer

  top_rule=0; //start variable of the grammar

  left_variable=0; // left rule of the grammar

  syntax_tree[syntax_tree_root]=grammar_rules[top_rule][left_variable]; // storing the start variable of the grammar_rule as root of the syntax tree

  variable_replacer[start_variable]=grammar_rules[top_rule][left_variable];//copies the right-hand side of the rule to the syntax tree.

  int variable_replacer_current_index=0;//sets the current indicies of the variable replacer and the syntax tree to 0.

  int syntax_tree_current_index=1;

  int statement_matcher_index=0;

  //loop until all the leaf nodes in the syntax tree are terminals

  while(true){

      //find out the rule related to the variable in the variable variable_replacer

      int grammar_rule_number, rule_right_side_copier_index, copy_flag, parent;

//loop for finding the parent and child of the grammar

      for(grammar_rule_number=0;grammar_rule_number<6;grammar_rule_number++){

          if(grammar_rules[grammar_rule_number][left_variable]==variable_replacer[variable_replacer_current_index]){ //check if any left variable of the grammar rule matches with variable replacer

              copy_flag=0; //if it matches initialize the copy flag as 0

              parent=syntax_tree_current_index-1;//if the flag is 0 then the previous index of syntax tree will be parent (parent=0)

         /*changed from 0 to 2*/     for(rule_right_side_copier_index=2;grammar_rules[grammar_rule_number][rule_right_side_copier_index]!='.';rule_right_side_copier_index++){ //the loop will run until it finds '.' on the right side of the grammar rule

                  if(grammar_rules[grammar_rule_number][rule_right_side_copier_index]=='>'){ //it will check the right_side_copier index of the rule is '>'

                    copy_flag==1;//if it finds '>' the copy_flag will be initialized as 1(that means it found the children)

                    continue;//the loop will be continued

                  }

                  if(copy_flag==1){

                    children_counter[parent]++;//if the flag is 1 the the children_counter parent index will be increamented

                    syntax_tree[syntax_tree_current_index]=grammar_rules[grammar_rule_number][rule_right_side_copier_index];//right side of the grammar rule will be copied in the current index of the syntax tree

                    syntax_tree_current_index++;//the value of the index of syntax tree will be increased

                    variable_replacer[variable_replacer_current_index]=grammar_rules[grammar_rule_number][rule_right_side_copier_index];//right side of the grammar rule will be copied in the variable replacer

                    variable_replacer_current_index++;//current index of variable replace will be increased


                  }

              }

          }

      }

      variable_replacer_current_index=0;//initialize the current index of variable replacer as 0

        //check if the current index of  variable replacer is i or any operator

      if(variable_replacer[variable_replacer_current_index]=='i'||variable_replacer[variable_replacer_current_index]=='='||variable_replacer[variable_replacer_current_index]=='+'||variable_replacer[variable_replacer_current_index]==';'){

        if(variable_replacer[variable_replacer_current_index]==statement[statement_matcher_index]){ // check if the current index of variable replacer matches with the statement matchers index

            variable_replacer_current_index++; //if matches then increament the value of variable_replacer_current_index

        }

        else

            cout<<"Syntax Error"; //other wise it will print syntax error

      }

      //else

        //variable_replacer_current_index++;

      int i, break_flag=1;

      for(i=0;i<50;i++){ //check if the variable_replacer current index has i,any operator

          if(variable_replacer[i]!='i' && variable_replacer[i]!='=' && variable_replacer[i]!='+' && variable_replacer[i]!=';')

            break_flag=0; //then initialize the break flag as 0

      }

      if(break_flag==1)

        break; //if break flag is 1 then break the loop


  }

  for(int i=0;i<12;i++)//will print the syntax tree

  {

      cout<<syntax_tree[i];

  }

  return 0;

}
