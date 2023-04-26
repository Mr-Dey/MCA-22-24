import java.util.Random;
import java.util.Scanner;
class game{
    int user;
    int com;
    int user_score=0;
    int com_score=0;
    int times=5;
    //Default const
    game(){}
    //For user who want to play more than 5 times
    game(int times){
        this.times=times>5?times:this.times;
    }
    
    String[] choices={"Rock","Paper","Scissors"};
    private void play(){
        Scanner sc=new Scanner(System.in);
        System.out.print("Choose [0] for Rock, [1] for Paper, [2] for Scissors\n->");
        this.user=sc.nextInt();
        Random rand=new Random();
        this.com=rand.nextInt(0,3);
    }
    private String result(){
        return user_score==com_score?"draw":user_score>com_score?"human":"computer";
    }
    public void run(){
        System.out.printf("This is a Rock Paper Scissors Game.\nYou will play against comuter for "+this.times+" times\n\n");
        while(times!=0){
            play();
            if(user==com)System.out.println("Draw");
            //user_win_condition
            else if(user==0 && com==2 || user==1 && com==0 || user==2 && com==1){System.out.printf("User win! Computer choosed %s\n\n",choices[com]);user_score++;}
            else {System.out.printf("You Loose! Computer choose %s.\n\n",choices[com]);com_score++;}
            times--;
            System.out.println("Game left "+times);
        }
        switch(result()){
            case("draw")->System.out.printf("Match draw! Human=%d / Computer=%d\n",this.user_score,this.com_score);
            case("human")->System.out.printf("Human Win! Human=%d / Computer=%d\n",this.user_score,this.com_score);
            case("computer")->System.out.printf("Computer Win! Human=%d / Computer=%d\n",this.user_score,this.com_score);
        }
    }
}
public class RockPaperScissors{
    public static void main(String[] args){
        game game=new game(4);
        game.run();
    }
}
