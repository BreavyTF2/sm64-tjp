// Parameters: dialog enum ID, (unused), lines per box, left offset, width

#ifdef VERSION_EU
#define COMRADES "friends"
#define PLASTERED "splattered"
#define SCAM_ME "cheat!\n"
#define SCRAM "get lost"
#define YOU_CANT_SWIM_IN_IT "Its too heavy to swim\nwith."
#define GIVE_UP "give up"
#else
#define COMRADES "comrades"
#define PLASTERED "plastered"
#define SCAM_ME "scam\nME. "
#define SCRAM "scram--"
#define YOU_CANT_SWIM_IN_IT "You can't swim in it."
#define GIVE_UP "give"
#endif

DEFINE_DIALOG(DIALOG_000, 1, 6, 30, 200, _("\
Wow! You're smack in the\n\
middle of the battlefield.\n\
You'll find the Power\n\
Stars that Bowser stole\n\
inside the painting\n\
worlds.\n\
First, talk to the\n\
Bob-omb Buddy. (Press [B]\n\
to talk.) He'll certainly\n\
help you out.\n\
\n\
\n\
To read signs, stop, face\n\
them and press [B]. Press [A]\n\
or [B] to scroll ahead. You\n\
can talk to some other\n\
characters by facing them\n\
and pressing [B]."))

DEFINE_DIALOG(DIALOG_001, 1, 4, 95, 200, _("\
Watch out! If you wander\n\
around here, you're liable\n\
to be " PLASTERED " by a\n\
water bomb!\n\
Those enemy Bob-ombs love\n\
to fight, and they're\n\
always finding ways to\n\
attack.\n\
This meadow has become\n\
a battlefield ever since\n\
Chucking got his\n\
paws on the Power Star.\n\
Can you recover the Star\n\
for us? Cross the bridge\n\
and go left up the path\n\
to find Chucking.\n\
Please come back to see\n\
me after you've retrieved\n\
the Power Star!"))

DEFINE_DIALOG(DIALOG_002, 1, 4, 95, 200, _("\
Hey, you! It's dangerous\n\
ahead, so listen up! Take\n\
my advice.\n\
\n\
Dodge the water bombs\n\
and cross the two bridges\n\
ahead to find the\n\
Bob-ombs'position.\n\
Chucking at the\n\
top of the mountain is\n\
very powerful--don't let\n\
him grab you!\n\
We're Bob-omb Buddies,\n\
and we're on your side.\n\
You can talk to us\n\
whenever you'd like to!"))

DEFINE_DIALOG(DIALOG_003, 1, 5, 95, 200, _("\
Thank you, Mario! Chucking\n\
is nothing but a\n\
big dud now! But the\n\
battle for the castle has\n\
just begun.\n\
Other enemies are holding\n\
the other Power Stars. If\n\
you recover more Stars,\n\
you can open new doors.\n\
Continue to new worlds!\n\
My Bob-omb Buddies are\n\
waiting for you. Be sure\n\
to talk to them--they'll\n\
set up cannons for you."))

DEFINE_DIALOG(DIALOG_004, 1, 3, 95, 200, _("\
We're peace-loving\n\
Bob-ombs, so we don't use\n\
cannons.\n\
But if you'd like\n\
to blast off, we don't\n\
mind. Please help yourself.\n\
We'll prepare all of the\n\
cannons in this course for\n\
you to use. Bon Voyage!"))

DEFINE_DIALOG(DIALOG_005, 1, 4, 30, 200, _("\
Hey, Mario! Is it true\n\
that you beat Chucking?\n\
You're too cool!\n\
\n\
You're sure strong, I'll\n\
give you that, and you\n\
have fast feet...but you're\n\
not as fleet as...\n\
Koopa the Quick!\n\
How about a race to the\n\
mountaintop, where\n\
Chucking was?\n\
Whaddya say? When I say\n\
『Go,』 let the race begin!\n\
Ready....\n\
//Go!////Don't Go"))
DEFINE_DIALOG(DIALOG_006, 1, 3, 30, 200, _("\
Hey!!! No cheating!\n\
Come back when you want\n\
to play fair!"))

DEFINE_DIALOG(DIALOG_007, 1, 5, 30, 200, _("\
Wheeze, wheeze, wheeze.\n\
Whoa! You...really...are...\n\
fast! Amazing!\n\
Here you go--you've won\n\
it, fair and square!"))

DEFINE_DIALOG(DIALOG_008, 1, 4, 30, 200, _("\
BEWARE OF BIG CHOMP\n\
Extreme Danger!\n\
Get close and press [C]^\n\
for a better look.\n\
Scary, huh?\n\
See the Red Coin on top\n\
of the stake?\n\
\n\
When you collect eight of\n\
them, a Power Star will\n\
appear in the meadow\n\
across the bridge."))

DEFINE_DIALOG(DIALOG_009, 1, 4, 95, 200, _("\
It takes the power of\n\
2 Stars to open this\n\
door. You need [%] more\n\
Stars.")) //KTQ THI Text //Repurposed for 2 star door

DEFINE_DIALOG(DIALOG_010, 1, 4, 30, 200, _("\
You've stepped on the\n\
Wing Cap Switch. Wearing\n\
the Wing Cap, you can\n\
soar through the sky.\n\
Now Wing Caps will pop\n\
out of all the red blocks\n\
you find.\n\
\n\
Would you like to Save?\n\
\n\
//Yes////No"))

DEFINE_DIALOG(DIALOG_011, 1, 4, 30, 200, _("\
You've just stepped on\n\
the Metal Cap Switch!\n\
The Metal Cap makes\n\
Mario invincible.\n\
Now Metal Caps will\n\
pop out of all of the\n\
green blocks you find.\n\
\n\
Would you like to Save?\n\
\n\
//Yes////No"))

DEFINE_DIALOG(DIALOG_012, 1, 5, 30, 200, _("\
You've just stepped on\n\
the Vanish Cap Switch.\n\
Now Vanish Caps will pop\n\
from all of the blue blocks\n\
you find.\n\
Would you like to Save?\n\
\n\
//Yes////No"))

DEFINE_DIALOG(DIALOG_013, 1, 5, 30, 200, _("\
You've just stepped on\n\
the Koopa Shell Switch!\n\
The Koopa Shell allows\n\
Mario to surf on liquids\n\
and reach higher speeds.\n\
Now Koopa Shells will\n\
pop out of some of the\n\
yellow blocks you find.\n\
\n\
\n\
Would you like to Save?\n\
\n\
//Yes////No"))

DEFINE_DIALOG(DIALOG_014, 1, 4, 30, 200, _("\
Wow! Another Power Star!\n\
Mario gains more courage\n\
from the power of the\n\
castle.\n\
Do you want to Save?\n\
\n\
//You Bet//Not Now"))

DEFINE_DIALOG(DIALOG_015, 1, 4, 30, 200, _("\
You can punch enemies to\n\
knock them down. Press [A]\n\
to jump, [B] to punch.\n\
Press [A] then [B] to Kick.\n\
To pick something up,\n\
press [B], too. To throw\n\
something you're holding,\n\
press [B] again."))

DEFINE_DIALOG(DIALOG_016, 1, 5, 30, 200, _("\
Tossya are lethal variants\n\
of Chuckya, having some\n\
very deadly throws.\n\
Mashing [A] is the only\n\
way to escape their grasp.\n\
Some quick maneuvering\n\
and throwing them off\n\
ledges, are the best\n\
ways to deal with them."))

DEFINE_DIALOG(DIALOG_017, 1, 5, 30, 200, _("\
I'm Chucking king\n\
of all throwing matter!\n\
Nice work, scaling my\n\
mountain.\n\
\n\
I respect your courage,\n\
but if you think I'm going\n\
to just hand over this\n\
Star, you've got another\n\
think coming!\n\
I'll give you a fair shot.\n\
To get the Star, you'll\n\
have to throw me down.\n\
Can you lift me from the\n\
back? Give it a try!"))

DEFINE_DIALOG(DIALOG_018, 1, 4, 30, 200, _("\
I'm sleeping because...\n\
I'm sleepy. I don't like\n\
being disturbed. Please\n\
walk quietly."))

DEFINE_DIALOG(DIALOG_019, 1, 2, 30, 200, _("\
Shhh! Please walk\n\
quietly in the hallway!"))

DEFINE_DIALOG(DIALOG_020, 1, 6, 95, 150, _("\
Dear Mario:\n\
Please come to the\n\
castle. I've baked\n\
a cake for you.\n\
Yours truly--\n\
Princess Toadstool"))

DEFINE_DIALOG(DIALOG_021, 1, 5, 95, 200, _("\
Welcome.\n\
No one's home!\n\
Now scram--and don't\n\
come back!\n\
Bwa ha ha!"))

DEFINE_DIALOG(DIALOG_022, 1, 2, 95, 200, _("\
You need a key to open\n\
this door."))

DEFINE_DIALOG(DIALOG_023, 1, 3, 95, 200, _("\
This key doesn't fit!\n\
Maybe it's for the\n\
basement..."))

DEFINE_DIALOG(DIALOG_024, 1, 5, 95, 200, _("\
You need Star power to\n\
open this door. Recover a\n\
Power Star from an enemy\n\
inside one of the castle's\n\
paintings."))


DEFINE_DIALOG(DIALOG_025, 1, 4, 95, 200, _("\
It takes the power of\n\
5 Stars to open this\n\
door. You need [%] more\n\
Stars."))

DEFINE_DIALOG(DIALOG_026, 1, 4, 95, 200, _("\
It takes the power of\n\
8 Stars to open this\n\
door. You need [%] more\n\
Stars."))

DEFINE_DIALOG(DIALOG_027, 1, 4, 95, 200, _("\
It takes the power of\n\
30 Stars to open this\n\
door. You need [%] more\n\
Stars."))

DEFINE_DIALOG(DIALOG_028, 1, 4, 95, 200, _("\
It takes the power of\n\
50 Stars to open this\n\
door. You need [%] more\n\
Stars."))

DEFINE_DIALOG(DIALOG_029, 1, 5, 95, 200, _("\
To open the door that\n\
leads to the 『endless』\n\
stairs, you need 70\n\
Stars.\n\
Bwa ha ha!"))

DEFINE_DIALOG(DIALOG_030, 1, 5, 30, 200, _("\
Hello! Lakitu here, one of\n\
your cameramen, with a\n\
bit of advice: Walk\n\
s-l-o-w-l-y to walk\n\
quietly.\n\
When you want to take a\n\
look around, turn the\n\
camera using [C]^ and [C]^.\n\
Press C^ to view from a\n\
distance.\n\
When you can't move the\n\
camera any farther, a\n\
buzzer will sound."))

DEFINE_DIALOG(DIALOG_031, 1, 5, 30, 200, _("\
"))//Koopa the Quick THI Win Message, removed for isle

DEFINE_DIALOG(DIALOG_032, 1, 4, 30, 200, _("\
You have the Wing Cap!\n\
Now, jump three times in\n\
in a row--do a Triple\n\
Jump--to take off.\n\
Fly high into the sky!\n\
You can fly even higher\n\
if you blast out of a\n\
cannon wearing the Cap.\n\
Use the [C] Buttons to look\n\
around while flying, and\n\
press [Z] to land."))

DEFINE_DIALOG(DIALOG_033, 1, 6, 30, 200, _("\
Ciao! You've reached\n\
Princess Toadstool's\n\
castle via a warp pipe.\n\
Using the controller is a\n\
piece of cake. Press [A] to\n\
jump and [B] to attack.\n\
Press [B] to read signs,\n\
too. Use the Control Stick\n\
in the center of the\n\
controller to move Mario\n\
around. Now, head for the\n\
castle."))

DEFINE_DIALOG(DIALOG_034, 1, 5, 30, 200, _("\
Hi! We're the Lakitu\n\
Bros., your cameramen.\n\
From now on, we'll be\n\
following you with\n\
cameras.\n\
We'll be shooting from the\n\
recommended angle, but\n\
you can change the\n\
camera angle by pressing\n\
the [C] Buttons.\n\
If we can't change the\n\
view any farther, we'll\n\
buzz.\n\
\n\
\n\
When you want to take a\n\
look at your surroundings,\n\
stop and press [C]^. Press\n\
[A] to resume game play.\n\
\n\
Switch camera modes with\n\
the [R] Button. Signs along\n\
the way will review these\n\
instructions. That's all!\n\
\n\
This message has been\n\
brought to you by the\n\
Lakitu Bros."))

DEFINE_DIALOG(DIALOG_035, 1, 5, 30, 200, _("\
There are four camera, or\n\
『[C],』 Buttons. Press [C]^\n\
to look around using the\n\
Control Stick.\n\
\n\
You'll usually see Mario\n\
through Lakitu's camera.\n\
It is the camera\n\
recommended for normal\n\
play.\n\
You can change angles by\n\
pressing [C]>. If you press\n\
[R], the view switches to\n\
Mario's camera, which\n\
is directly behind him.\n\
Press [R] again to return\n\
to Lakitu's camera. Press\n\
[C]| to see Mario from\n\
afar, using either\n\
Lakitu's or Mario's view."))

DEFINE_DIALOG(DIALOG_036, 1, 5, 30, 200, _("\
OBSERVATION PLATFORM\n\
Press [C]^ to take a look\n\
around. Don't miss\n\
anything!\n\
\n\
Press [R] to switch to\n\
Mario's camera. It\n\
always follows Mario.\n\
Press [R] again to switch\n\
to Lakitu's camera.\n\
Pause the game and\n\
switch the mode to 『fix』\n\
the camera in place while\n\
holding [R]. Give it a try!"))

DEFINE_DIALOG(DIALOG_037, 1, 2, 30, 200, _("\
I win! You lose!\n\
Ha ha ha ha!\n\
You're no slouch, but I'm\n\
a better sledder!\n\
Better luck next time!"))

DEFINE_DIALOG(DIALOG_038, 1, 3, 95, 200, _("\
Reacting to the Star\n\
power, the door slowly\n\
opens."))

DEFINE_DIALOG(DIALOG_039, 1, 5, 30, 200, _("\
Keep Out!\n\
This means you!\n\
\n\
\n\
\n\
I'll never give up my\n\
Power Stars! They're\n\
very valuable--they were\n\
given to me by Bowser\n\
himself!\n\
I've hidden them, you\n\
know, and I'll never tell\n\
where. Okay, I'll give you\n\
a little hint:\n\
\n\
Read the Star names\n\
at the beginning of the\n\
course.\n\
--Chucking,\n\
// on the mountaintop"))

DEFINE_DIALOG(DIALOG_040, 1, 3, 30, 200, _("\
Warning!\n\
Cold, Cold Crevasse\n\
Below!"))

DEFINE_DIALOG(DIALOG_041, 1, 4, 30, 200, _("\
I win! You lose!\n\
Ha ha ha!\n\
Too bad, so sad.\n\
See you later!"))

DEFINE_DIALOG(DIALOG_042, 1, 4, 30, 200, _("\
Caution! Narrow Bridge!\n\
Cross slowly!\n\
\n\
\n\
You can jump to the edge\n\
of the cliff and hang on,\n\
and you can climb off the\n\
edge if you move slowly.\n\
When you want to let go,\n\
either press [Z] or press\n\
the Control Stick in the\n\
direction of Mario's back.\n\
To climb up, press Up on\n\
the Control Stick. To\n\
scurry up quickly, press\n\
the [A] Button."))

DEFINE_DIALOG(DIALOG_043, 1, 5, 30, 200, _("\
If you jump and hold the\n\
[A] Button, you can hang on\n\
to some objects overhead.\n\
It's the same as grabbing\n\
a flying bird!"))

DEFINE_DIALOG(DIALOG_044, 1, 4, 95, 200, _("\
Whooo's there? Whooo\n\
woke me up? Hmm, my\n\
body feels heavier...\n\
\n\
Hey, why not take a short\n\
flight with me? Press and\n\
hold [A] to grab on to me.\n\
Release [A] to let go.\n\
I'll take you wherever\n\
you want to go. Watch my\n\
shadow, and hold on!"))

DEFINE_DIALOG(DIALOG_045, 1, 6, 95, 200, _("\
Whew! I'm just about\n\
flapped out. You're a\n\
heavy one, aren't you?\n\
That's it for now. Press\n\
[A] to let go. Okay,\n\
bye byyyyyyeeee!"))

DEFINE_DIALOG(DIALOG_046, 1, 5, 30, 200, _("\
You have to master three\n\
important jumping\n\
techniques.\n\
First try the Triple Jump.\n\
\n\
Run fast, then jump three\n\
times, one, two, three.\n\
If you time the jumps\n\
right, you'll hop, skip,\n\
then jump really high.\n\
Next, go for distance\n\
with the Long Jump. Run,\n\
press [Z] to crouch then [A]\n\
to jump really far.\n\
\n\
To do the Wall Kick, press\n\
[A] to jump at a wall, then\n\
jump again when you hit\n\
the wall.\n\
\n\
Got that? Triple Jump,\n\
Long Jump, Wall Kick.\n\
Practice, practice,\n\
practice. You don't stand\n\
a chance without them."))

DEFINE_DIALOG(DIALOG_047, 1, 2, 95, 200, _("\
Hi! I'll prepare the cannon\n\
for you!"))

DEFINE_DIALOG(DIALOG_048, 1, 4, 30, 200, _("\
Snow Mountain Summit\n\
Watch for slippery\n\
conditions! Please enter\n\
cottage first."))

DEFINE_DIALOG(DIALOG_049, 1, 5, 30, 200, _("\
Remember that tricky Wall\n\
Kick jump, It's a\n\
technique you'll have to\n\
master in order to reach\n\
high places.\n\
Use it to jump from wall\n\
to wall. Press the\n\
Control Stick in the\n\
direction you want to\n\
bounce to gain momentum.\n\
Practice makes perfect!"))

DEFINE_DIALOG(DIALOG_050, 1, 4, 30, 200, _("\
Hold [Z] to crouch and\n\
slide down a slope.\n\
Or press [Z] while in the\n\
air to Pound the Ground!\n\
If you stop, crouch, then\n\
jump, you'll do a\n\
Backward Somersault!\n\
Got that?\n\
There's more. Crouch and\n\
then jump to do a\n\
Long Jump! Or crouch and\n\
walk to...never mind."))

DEFINE_DIALOG(DIALOG_051, 1, 6, 30, 200, _("\
Climbing's easy! When you\n\
jump at trees, poles or\n\
pillars, you'll grab them\n\
automatically. Press [A] to\n\
jump off backward.\n\
\n\
To rotate around the\n\
object, press Right or\n\
Left on the Control Stick.\n\
When you reach the top,\n\
press Up to do a\n\
handstand!\n\
Jump off from the\n\
handstand for a high,\n\
stylin' dismount."))

DEFINE_DIALOG(DIALOG_052, 1, 5, 30, 200, _("\
Stop and press [Z] to\n\
crouch, then press [A]\n\
to do a high, Backward\n\
Somersault!\n\
\n\
To perform a Side\n\
Somersault, run, do a\n\
sharp U-turn and jump.\n\
You can catch lots of\n\
air with both jumps."))

DEFINE_DIALOG(DIALOG_053, 1, 5, 30, 200, _("\
Sometimes, if you pass\n\
through a coin ring or\n\
find a secret point in a\n\
course, a red number will\n\
appear.\n\
If you trigger five red\n\
numbers, a secret Star\n\
will show up."))

DEFINE_DIALOG(DIALOG_054, 1, 5, 30, 200, _("\
Welcome to the snow\n\
slide! Hop on! To speed\n\
up, press forward on the\n\
Control Stick. To slow\n\
down, pull back."))

DEFINE_DIALOG(DIALOG_055, 1, 6, 30, 200, _("\
I'm the world champion\n\
sledder! I'm big, but I'm\n\
very fast! How about a\n\
race?\n\
Ready...\n\
\n\
//Go//// No way"))

DEFINE_DIALOG(DIALOG_056, 1, 3, 30, 200, _("\
You brrrr-oke my record!\n\
Here, take this gold\n\
medal--you deserve it!"))

DEFINE_DIALOG(DIALOG_057, 1, 4, 30, 200, _("\
Did you see my brr-baby\n\
anywhere? I have many\n\
chill-dren, but I can't\n\
find my brrr-baby!\n\
He coos so sweetly when I\n\
hold him! Where can my\n\
brrr-baby be?"))

DEFINE_DIALOG(DIALOG_058, 1, 4, 30, 200, _("\
My brrr-baby!! Haven't I\n\
told you not to go\n\
sliding off alone?\n\
Thank you, Mario! Here's\n\
a token of gratitude. Its\n\
power will warm you!"))

DEFINE_DIALOG(DIALOG_059, 1, 4, 30, 200, _("\
That's not my brrr-baby!\n\
His parents must be\n\
worried sick!"))

DEFINE_DIALOG(DIALOG_060, 1, 4, 30, 200, _("\
ATTENTION!\n\
Read Before Diving In!\n\
\n\
\n\
If you stay under the\n\
water for too long, you'll\n\
run out of oxygen.\n\
\n\
Return to the surface for\n\
air or find an air bubble\n\
or coins to breathe while\n\
underwater.\n\
Press [A] to swim. Hold [A]\n\
to swim slow and steady.\n\
Tap [A] with smooth timing\n\
to gain speed.\n\
Press Up on the\n\
Control Stick and press [A]\n\
to dive.\n\
\n\
Press Down on the Control\n\
Stick and press [A] to\n\
return to the surface.\n\
\n\
Hold Down and press [A]\n\
while on the surface near\n\
the edge of the water to\n\
jump out."))

DEFINE_DIALOG(DIALOG_061, 1, 4, 30, 200, _("\
BRRR! Frostbite Danger!\n\
Do not swim here.\n\
I'm serious.\n\
//--The Penguin"))

DEFINE_DIALOG(DIALOG_062, 1, 3, 30, 200, _("\
Hidden inside the green\n\
block is the amazing\n\
Metal Cap.\n\
Wearing it, you won't\n\
catch fire or be hurt\n\
by enemy attacks.\n\
You don't even have to\n\
breathe while wearing it.\n\
\n\
The only problem:\n"
YOU_CANT_SWIM_IN_IT))

DEFINE_DIALOG(DIALOG_063, 1, 5, 30, 200, _("\
The Vanish Cap is inside\n\
the blue block. Mr. I.\n\
will be surprised, since\n\
you'll be invisible when\n\
you wear it!\n\
Even the Big Boo will be\n\
fooled--and you can walk\n\
through secret walls, too."))

DEFINE_DIALOG(DIALOG_064, 1, 5, 30, 200, _("\
When you put on the Wing\n\
Cap that comes from a\n\
red block, do the Triple\n\
Jump to soar high into\n\
the sky.\n\
Use the Control Stick to\n\
guide Mario. Pull back to\n\
to fly up, press forward\n\
to nose down, and press [Z]\n\
to land."))

DEFINE_DIALOG(DIALOG_065, 1, 6, 30, 200, _("\
Swimming Lessons!\n\
Tap [A] to do the breast\n\
stroke. If you time the\n\
taps right, you'll swim\n\
fast.\n\
\n\
Press and hold [A] to do a\n\
slow, steady flutter kick.\n\
Press Up on the Control\n\
Stick to dive, and pull\n\
back on the stick to head\n\
for the surface.\n\
To jump out of the water,\n\
hold Down on the Control\n\
Stick, then press [A].\n\
Easy as pie, right?\n\
\n\
\n\
But remember:\n\
Mario can't breathe under\n\
the water! Return to the\n\
surface for air when the\n\
Power Meter runs low.\n\
\n\
And one last thing: You\n\
can't open doors that\n\
are underwater."))
DEFINE_DIALOG(DIALOG_066, 1, 5, 30, 200, _("\
Mario! Watch out for the\n\
flame Bowser exhales! Get\n\
behind him, grab him\n\
by the tail, and start\n\
swinging!\n\
Before you throw him,\n\
work up speed by rotating\n\
the Control Stick. The\n\
faster you swing him, the\n\
farther he'll fly!\n\
Look around using the [C]\n\
Buttons. You have to\n\
throw him into one of the\n\
bombs in the four corners.\n\
\n\
Aim carefully, now, and\n\
press B to let him fly!"))

DEFINE_DIALOG(DIALOG_067, 1, 5, 30, 200, _("\
Tough luck, Mario!\n\
Princess Toadstool isn't\n\
here...Gwa ha ha!! Go\n\
ahead--just try to grab\n\
me by the tail!\n\
You'll never be able to\n\
swing ME around! A wimp\n\
like you won't throw me\n\
out of here! Never! Ha!"))

DEFINE_DIALOG(DIALOG_068, 1, 5, 30, 200, _("\
It's Lethal Lava Land!\n\
If you catch fire or fall\n\
into a pool of flames,\n\
you'll be hopping mad, but\n\
don't lose your cool.\n\
You can still control\n\
Mario--just try to keep\n\
calm!"))

DEFINE_DIALOG(DIALOG_069, 1, 6, 30, 200, _("\
Sometimes you'll bump into\n\
invisible walls at the\n\
edges of the painting\n\
worlds. If you hit a wall\n\
while flying, you'll bounce\n\
back."))

DEFINE_DIALOG(DIALOG_070, 1, 5, 30, 200, _("\
You can return to the\n\
castle's main hall at any\n\
time from the painting\n\
worlds where the enemies\n\
live.\n\
Just stop, stand still,\n\
press Start to pause the\n\
game, then select\n\
『Exit Course.』\n\
\n\
You don't have to collect\n\
all Power Stars in one\n\
course before going on to\n\
the next.\n\
\n\
Return later, when you're\n\
more experienced, to pick\n\
up difficult ones.\n\
\n\
\n\
Whenever you find a Star,\n\
a hint for finding the\n\
next one will appear on\n\
the course's start screen.\n\
\n\
You can, however, collect\n\
any of the remaining\n\
Stars next. You don't\n\
have to recover the one\n\
described by the hint."))

DEFINE_DIALOG(DIALOG_071, 1, 3, 30, 200, _("\
Danger Ahead!\n\
Beware of the strange\n\
cloud! Don't inhale!\n\
If you feel faint, run for\n\
higher ground and fresh\n\
air!\n\
Circle: Shelter\n\
Arrow: Entrance-Exit"))

DEFINE_DIALOG(DIALOG_072, 1, 5, 30, 200, _("\
High winds ahead!\n\
Pull your Cap down tight.\n\
If it blows off, you'll\n\
have to find it on this\n\
mountain."))

DEFINE_DIALOG(DIALOG_073, 1, 4, 95, 200, _("\
Open the Treasure Chests\n\
in the correct order to\n\
win the prize.\n\
What is the correct\n\
order?\n\
\n\
\n\
I'll never tell!\n\
//--The Captain"))

DEFINE_DIALOG(DIALOG_074, 1, 5, 30, 200, _("\
You can grab on to the\n\
edge of a cliff or ledge\n\
with your fingertips and\n\
hang down from it.\n\
\n\
To drop from the edge,\n\
either press the Control\n\
Stick in the direction of\n\
Mario's back or press the\n\
[Z] Button.\n\
To get up onto the ledge,\n\
either press Up on the\n\
Control Stick or press [A]\n\
as soon as you grab the\n\
ledge to climb up quickly."))

DEFINE_DIALOG(DIALOG_075, 1, 5, 30, 200, _("\
Mario!! There's big\n\
trouble...and Bowser's\n\
behind it!\n\
\n\
\n\
He's stolen all the Stars\n\
that give the castle its\n\
power, and he's hidden\n\
them inside the paintings\n\
and the walls.\n\
He's taken us, too.\n\
Everybody...we're being\n\
held inside the walls.\n\
Please, Mario! You have\n\
to help us!\n\
Retrieve the Power Stars\n\
from the enemies in the\n\
paintings, and free us\n\
from this prison!"))

DEFINE_DIALOG(DIALOG_076, 1, 6, 30, 200, _("\
Thanks to the power of\n\
the Stars, life is\n\
returning to the castle.\n\
Please, Mario, you have\n\
to give Bowser the boot!\n\
\n\
Here, let me tell you a\n\
little something about the\n\
castle. In the room with\n\
the mirrors, look carefully\n\
for anything that's not\n\
reflected in the mirror.\n\
And when you go to the\n\
water town, you can flood\n\
it with a high jump into\n\
the painting. Oh, by the\n\
way, look what I found!"))

DEFINE_DIALOG(DIALOG_077, 1, 3, 150, 200, _("\
Pound the two columns\n\
down before you open\n\
the door."))

DEFINE_DIALOG(DIALOG_078, 1, 5, 30, 200, _("\
Break open the Blue Coin\n\
Block by Pounding the\n\
Ground with the [Z] Button.\n\
One Blue Coin is worth\n\
five Yellow Coins.\n\
But you have to hurry!\n\
The coins will disappear\n\
if you're not quick to\n\
collect them! Too bad."))

DEFINE_DIALOG(DIALOG_079, 1, 5, 30, 200, _("\
Owwwuu! Let me go!\n\
Uukee-kee! It wasn't me!\n\
It was my brother,\n\
Wakkiki, who stole your\n\
Cap.\n\
If you turn me loose, I'll\n\
give you a nice present.\n\
Please let me go!\n\
//Free him/ Hold on"))

DEFINE_DIALOG(DIALOG_080, 1, 1, 30, 200, _("\
Eeeh hee hee hee!"))

DEFINE_DIALOG(DIALOG_081, 1, 5, 30, 200, _("\
You've reached Wet-Dry\n\
World. The city welcomes\n\
you with the depth of\n\
water you bring as you\n\
enter."))

DEFINE_DIALOG(DIALOG_082, 1, 6, 30, 200, _("\
Hold on to your hat! If\n\
you lose it, you'll be\n\
injured more easily. And\n\
if you do lose it, you'll\n\
have to find it in the\n\
course where you lost it.\n\
Oh, boy, it's not looking\n\
good for the Princess.\n\
She's still trapped\n\
somewhere inside the\n\
walls. Please, Mario, you\n\
have to bash Bowser!\n\
Did you know that there\n\
are enemy worlds inside\n\
walls, as well as in the\n\
paintings? Yup. It's true.\n\
Oh, here, take this. I've\n\
been keeping it for you."))

DEFINE_DIALOG(DIALOG_083, 1, 6, 30, 200, _("\
There's something strange\n\
about that clock. As you\n\
jump inside, watch the\n\
position of the big hand.\n\
Oh! Look what I recovered!\n\
Here, catch it cool, now!"))

DEFINE_DIALOG(DIALOG_084, 1, 5, 30, 200, _("\
Yeeoww! What a bully!\n\
This Star? Bowser gave\n\
it to me--I had no idea\n\
it was yours! Finders,\n\
keepers, you know?\n\
Okay, okay, you can have\n\
it. Just don't expect the\n\
Easter Bunny to stop at\n\
your house next year!"))

DEFINE_DIALOG(DIALOG_085, 1, 5, 30, 200, _("\
You don't stand a ghost\n\
of a chance in this house.\n\
If you get out in one\n\
piece, you are...\n\
...UNBELIEVABLE..."))

DEFINE_DIALOG(DIALOG_086, 1, 3, 30, 200, _("\
Running around in circles\n\
makes some bad guys roll\n\
their eyes."))

DEFINE_DIALOG(DIALOG_087, 1, 4, 30, 200, _("\
Santa Claus isn't the only\n\
one who can go down a\n\
chimney! Come on in!\n\
/--Cabin Proprietor"))

DEFINE_DIALOG(DIALOG_088, 1, 5, 30, 200, _("\
Work Elevator\n\
For those who get off\n\
here: Grab the pole to the\n\
left and slide carefully\n\
down."))

DEFINE_DIALOG(DIALOG_089, 1, 5, 95, 200, _("\
Both ways fraught with\n\
danger! Watch your feet!\n\
Those who can't do the\n\
Long Jump, tsk, tsk. Make\n\
your way to the right.\n\
Right: Work Elevator\n\
/// Cloudy Maze\n\
Left: Black Hole\n\
///Underground Lake\n\
\n\
Red Circle: Elevator 2\n\
//// Underground Lake\n\
Arrow: You are here"))

DEFINE_DIALOG(DIALOG_090, 1, 6, 30, 200, _("\
Bwa ha ha ha!\n\
You've stepped right into\n\
my trap, just as I knew\n\
you would! I warn you,\n\
『Friend,』 watch your\n\
step!"))

DEFINE_DIALOG(DIALOG_091, 2, 2, 30, 200, _("\
Danger!\n\
Strong Gusts!\n\
But the wind makes a\n\
comfy ride."))

DEFINE_DIALOG(DIALOG_092, 1, 5, 30, 200, _("\
Pestering me again, are\n\
you, Mario? Can't you see\n\
that I'm having a merry\n\
little time, making\n\
mischief with my minions?\n\
Now, return those Stars!\n\
My troops in the walls\n\
need them! Bwa ha ha!"))

DEFINE_DIALOG(DIALOG_093, 1, 5, 30, 200, _("\
Mario! You again! Well\n\
that's just fine--I've\n\
been looking for something\n\
to fry with my fire\n\
breath!\n\
Your Star Power is\n\
useless against me!\n\
Your friends are all\n\
trapped within the\n\
walls...\n\
And you'll never see the\n\
Princess again!\n\
Bwa ha ha ha!"))

DEFINE_DIALOG(DIALOG_094, 1, 4, 30, 200, _("\
Get a good run up the\n\
slope! Do you remember\n\
the Long Jump? Run, press\n\
[Z], then jump!"))

DEFINE_DIALOG(DIALOG_095, 1, 4, 30, 200, _("\
To read a sign, stand in\n\
front of it and press [B],\n\
like you did just now.\n\
\n\
When you want to talk to\n\
a Koopa Troopa or other\n\
animal, stand right in\n\
front of it.\n\
Please recover the Stars\n\
that were stolen by\n\
Bowser in this course."))

DEFINE_DIALOG(DIALOG_096, 1, 4, 30, 200, _("\
The path is narrow here.\n\
Easy does it! No one is\n\
allowed on the\n\
mountaintop!\n\
And if you know what's\n\
good for you, you won't\n\
wake anyone who's\n\
sleeping!\n\
Move slowly,\n\
tread lightly."))

DEFINE_DIALOG(DIALOG_097, 1, 5, 30, 200, _("\
Don't be a pushover!\n\
If anyone tries to shove\n\
you around, push back!\n\
It's one-on-one, with a\n\
fiery finish for the loser!"))

DEFINE_DIALOG(DIALOG_098, 1, 2, 95, 200, _("\
Come on in here...\n\
...heh, heh, heh..."))

// unused
DEFINE_DIALOG(DIALOG_099, 1, 5, 95, 200, _("\
Eh he he...\n\
You're mine, now, hee hee!\n\
I'll pass right through\n\
this wall. Can you do\n\
that? Heh, heh, heh!"))

DEFINE_DIALOG(DIALOG_100, 1, 2, 95, 200, _("\
Ukkiki...Wakkiki...kee kee!\n\
It's mine! I got it!"))

DEFINE_DIALOG(DIALOG_101, 1, 4, 95, 200, _("\
Kee ke! I've been framed!\n\
Okay, okay, I love this\n\
Cap, but I'll give it back.\n\
Keee Kee!"))

DEFINE_DIALOG(DIALOG_102, 1, 5, 30, 200, _("\
Pssst! The Boos are super\n\
shy. If you look them\n\
in the eyes, they fade\n\
away, but if you turn\n\
your back, they reappear.\n\
It's no use trying to hit\n\
them when they're fading\n\
away. Instead, sneak up\n\
behind them and punch."))

DEFINE_DIALOG(DIALOG_103, 1, 3, 95, 200, _("\
To the one who has stood\n\
tall atop all four pillars,\n\
I grant admittance."))

DEFINE_DIALOG(DIALOG_104, 1, 5, 30, 200, _("\
The shadowy star in front\n\
of you is a 『Star\n\
Marker.』 When you collect\n\
all 8 Red Coins, the Star\n\
will appear here."))

DEFINE_DIALOG(DIALOG_105, 1, 3, 95, 200, _("\
Ready for blastoff! Come\n\
on, hop into the cannon!\n\
\n\
You can reach the Star on\n\
the floating island by\n\
using the four cannons.\n\
Use the Control Stick to\n\
aim, then press [A] to fire.\n\
\n\
If you're handy, you can\n\
grab on to trees or poles\n\
to land."))

DEFINE_DIALOG(DIALOG_106, 1, 2, 95, 200, _("\
Ready for blastoff! Come\n\
on, hop into the cannon!"))

DEFINE_DIALOG(DIALOG_107, 1, 5, 30, 200, _("\
You've collected 100\n\
coins! Mario gains more\n\
power from the castle.\n\
Do you want to Save?\n\
//Yes////No"))
DEFINE_DIALOG(DIALOG_108, 1, 2, 95, 200, _("\
Boooom! Here comes the\n\
master! Ka ha ha ha..."))

DEFINE_DIALOG(DIALOG_109, 1, 4, 95, 200, _("\
Ooooo Nooooo!\n\
Talk about out-of-body\n\
experiences--my body\n\
has melted away!\n\
Have you run in to any\n\
headhunters lately??\n\
I could sure use a new\n\
body!\n\
Brrr! My face might\n\
freeze like this!"))

DEFINE_DIALOG(DIALOG_110, 1, 5, 95, 200, _("\
I need a good head on my\n\
shoulders. Do you know of\n\
anybody in need of a good\n\
body? Please! I'll follow\n\
you if you do!"))

DEFINE_DIALOG(DIALOG_111, 1, 4, 95, 200, _("\
Perfect! What a great\n\
new body! Here--this is a\n\
present for you. It's sure\n\
to warm you up."))

DEFINE_DIALOG(DIALOG_112, 1, 4, 30, 200, _("\
Collect as many coins as\n\
possible! They'll refill\n\
your Power Meter.\n\
\n\
You can check to see how\n\
many coins you've\n\
collected in each of the\n\
15 painting worlds.\n\
You can also recover\n\
power by touching the\n\
Spinning Heart.\n\
\n\
The faster you run\n\
through the heart, the\n\
more power you'll recover."))

DEFINE_DIALOG(DIALOG_113, 1, 6, 30, 200, _("\
There are special Caps in\n\
the red, green and blue\n\
blocks. Step on the\n\
switches in the hidden\n\
courses to activate the\n\
Cap Blocks."))

DEFINE_DIALOG(DIALOG_114, 1, 5, 95, 200, _("\
It makes me so mad! We\n\
build your houses, your\n\
castles, and still you\n\
walk all over us.\n\
\n\
And do you ever say thank\n\
you? No! Well, you're not\n\
going to walk on me! I\n\
think I'll crush you\n\
just for fun!\n\
Do you have a problem\n\
with that? Just try to\n\
pound me, Whomp! Ha!"))

DEFINE_DIALOG(DIALOG_115, 1, 4, 95, 200, _("\
Not again! I guess I'm\n\
just a stepping stone,\n\
after all. You win. Here,\n\
take this with you!"))

DEFINE_DIALOG(DIALOG_116, 1, 5, 95, 200, _("\
Oww! That smarts! You\n\
really are strong, even if\n\
you aren't so fast. I wish\n\
that my troops were\n\
more like you.\n\
Oh well, here's the Star,\n\
as I promised. When you\n\
want to see me again,\n\
select this Star from the\n\
menu. See you later!"))

DEFINE_DIALOG(DIALOG_117, 1, 4, 95, 200, _("\
So we surprised you, did\n\
we? We have a bigger\n\
surprise yet in store!\n\
Let us give you a hand..."))

DEFINE_DIALOG(DIALOG_118, 1, 6, 95, 200, _("\
This is a surprise! You're\n\
stronger than we expected...\n\
quite a handful, indeed!\n\
The pyramid is yours for\n\
today. Take this Star to\n\
use as you please."))

DEFINE_DIALOG(DIALOG_119, 1, 6, 30, 200, _("\
Grrr! I was a bit\n\
careless. This is not as I\n\
had planned...but I still\n\
hold the power of the\n\
Stars, and I still have\n\
Peach.\n\
Bwa ha ha! You'll get no\n\
more Stars from me! I'm\n\
not finished with you yet,\n\
but I'll let you go for\n\
now. You'll pay for this...\n\
later!"))

DEFINE_DIALOG(DIALOG_120, 1, 4, 30, 200, _("\
Ooowaah! Can it be that\n\
I've lost??? The power of\n\
the Stars has failed me...\n\
this time.\n\
Consider this a draw.\n\
Next time, I'll be in\n\
perfect condition.\n\
\n\
Now, if you want to see\n\
your precious Princess,\n\
come to the top of the\n\
tower.\n\
I'll be waiting!\n\
Gwa ha ha ha!"))

DEFINE_DIALOG(DIALOG_121, 1, 5, 30, 200, _("\
Nooo! It can't be!\n\
You've really beaten me,\n\
Mario?!! I gave those\n\
troops power, but now\n\
it's fading away!\n\
Arrgghh! I can see peace\n\
returning to the world! I\n\
can't stand it! Hmmm...\n\
It's not over yet...\n\
\n\
C'mon troops! Let's watch\n\
the ending together!\n\
Bwa ha ha!"))


DEFINE_DIALOG(DIALOG_122, 1, 4, 30, 200, _("\
The Black Hole\n\
Right: Work Elevator\n\
/// Cloudy Maze\n\
Left: Underground Lake"))

DEFINE_DIALOG(DIALOG_123, 1, 4, 30, 200, _("\
Metal Cavern\n\
Right: To Waterfall\n\
Left: Metal Cap Switch"))

DEFINE_DIALOG(DIALOG_124, 1, 4, 30, 200, _("\
Work Elevator\n\
Danger!!\n\
Read instructions\n\
thoroughly!\n\
Elevator continues in the\n\
direction of the arrow\n\
activated."))

DEFINE_DIALOG(DIALOG_125, 1, 3, 30, 200, _("\
Hazy Maze-Exit\n\
Danger! Closed.\n\
Turn back now."))

DEFINE_DIALOG(DIALOG_126, 2, 3, 30, 200, _("\
Up: Black Hole\n\
Right: Work Elevator\n\
/// Hazy Maze"))

DEFINE_DIALOG(DIALOG_127, 3, 4, 30, 200, _("\
Underground Lake\n\
Right: Metal Cave\n\
Left: Abandoned Mine\n\
///(Closed)\n\
A gentle sea dragon lives\n\
here. Pound on his back to\n\
make him lower his head.\n\
Don't become his lunch."))

DEFINE_DIALOG(DIALOG_128, 1, 4, 95, 200, _("\
Hey-ey! It's against the\n\
rules to throw me out of\n\
the ring! C'mon, now,\n\
fight fair!"))

DEFINE_DIALOG(DIALOG_129, 1, 5, 30, 200, _("\
Welcome to the Vanish\n\
Cap Switch Course! All of\n\
the blue blocks you find\n\
will become solid once you\n\
step on the Cap Switch.\n\
You'll disappear when you\n\
put on the Vanish Cap, so\n\
you'll be able to elude\n\
enemies and walk through\n\
many things. Try it out!"))

DEFINE_DIALOG(DIALOG_130, 1, 5, 30, 200, _("\
Welcome to the Metal Cap\n\
Switch Course! Once you\n\
step on the Cap Switch,\n\
the green blocks will\n\
become solid.\n\
When you turn your body\n\
into metal with the Metal\n\
Cap, you can walk\n\
underwater! Try it!"))

DEFINE_DIALOG(DIALOG_131, 1, 5, 30, 200, _("\
Welcome to the Wing Cap\n\
Course! Step on the red\n\
switch at the top of the\n\
tower, in the center of\n\
the rainbow ring.\n\
When you trigger the\n\
switch, all of the red\n\
blocks you find will\n\
become solid.\n\
\n\
Try out the Wing Cap! Do\n\
the Triple Jump to take\n\
off and press [Z] to land.\n\
\n\
\n\
Pull back on the Control\n\
Stick to go up and push\n\
forward to nose down,\n\
just as you would when\n\
flying an airplane."))

DEFINE_DIALOG(DIALOG_132, 1, 4, 30, 200, _("\
No, no, NO! Shortcuts\n\
are strictly forbidden.\n\
You're disqualified! Next\n\
time, play fair!"))

DEFINE_DIALOG(DIALOG_133, 1, 6, 30, 200, _("\
Am I glad to see you! The\n\
Princess...and I...and,\n\
well, everybody...we're all\n\
trapped inside the castle\n\
walls.\n\
\n\
Bowser has stolen the\n\
castle's Stars, and he's\n\
using their power to\n\
create his own world in\n\
the paintings and walls.\n\
\n\
Please recover the Power\n\
Stars! As you find them,\n\
you can use their power\n\
to open the doors that\n\
Bowser has sealed.\n\
\n\
There are four rooms on\n\
the first floor. Start in\n\
the one with the painting\n\
of Bob-omb inside. It's\n\
the only room that Bowser\n\
hasn't sealed.\n\
When you collect eight\n\
Power Stars, you'll be\n\
able to open the door\n\
with the big star. The\n\
Princess must be inside!"))

DEFINE_DIALOG(DIALOG_134, 1, 5, 30, 200, _("\
The names of the Stars\n\
are also hints for\n\
finding them. They are\n\
displayed at the beginning\n\
of each course.\n\
You can collect the Stars\n\
in any order. You won't\n\
find some Stars, enemies\n\
or items unless you select\n\
a specific Star.\n\
After you collect some\n\
Stars, you can try\n\
another course.\n\
We're all waiting for\n\
your help!"))

DEFINE_DIALOG(DIALOG_135, 1, 5, 30, 200, _("\
It was Bowser who stole\n\
the Stars. I saw him with\n\
my own eyes!\n\
\n\
\n\
He's hidden six Stars in\n\
each course, but you\n\
won't find all of them in\n\
some courses until you\n\
press the Cap Switches.\n\
The Stars you've found\n\
will show on each course's\n\
starting screen.\n\
\n\
\n\
If you want to see some\n\
of the enemies you've\n\
already defeated, select\n\
the Stars you recovered\n\
from them."))

DEFINE_DIALOG(DIALOG_136, 1, 6, 30, 200, _("\
Wow! You've already\n\
recovered that many\n\
Stars? Way to go, Mario!\n\
I'll bet you'll have us out\n\
of here in no time!\n\
\n\
Be careful, though.\n\
Bowser and his band\n\
wrote the book on 『bad.』\n\
Take my advice: When you\n\
need to recover from\n\
injuries, collect coins.\n\
Yellow Coins refill one\n\
piece of the Power Meter,\n\
Red Coins refill two\n\
pieces, and Blue Coins\n\
refill five.\n\
\n\
To make Blue Coins\n\
appear, pound on Blue\n\
Coin Blocks.\n\
\n\
\n\
\n\
Also, if you fall from\n\
high places, you'll\n\
minimize damage if you\n\
Pound the Ground as you\n\
land."))

DEFINE_DIALOG(DIALOG_137, 1, 6, 30, 200, _("\
Thanks, Mario! The castle\n\
is recovering its energy\n\
as you retrieve Power\n\
Stars, and you've chased\n\
Bowser right out of here,\n\
on to some area ahead.\n\
Oh, by the by, are you\n\
collecting coins? Special\n\
Stars appear when you\n\
collect 100 coins in each\n\
of the 14 courses!"))

DEFINE_DIALOG(DIALOG_138, 1, 3, 30, 200, _("\
Down: Underground Lake\n\
Left: Black Hole\n\
Right: Hazy Maze (Closed)"))

DEFINE_DIALOG(DIALOG_139, 1, 6, 30, 200, _("\
Above: Automatic Elevator\n\
Elevator begins\n\
automatically and follows\n\
pre-set course.\n\
It disappears\n\
automatically, too."))

DEFINE_DIALOG(DIALOG_140, 1, 6, 30, 200, _("\
Elevator Area\n\
Right: Hazy Maze\n\
/// Entrance\n\
Left: Black Hole\n\
///Elevator 1\n\
Arrow: You are here"))

DEFINE_DIALOG(DIALOG_141, 1, 5, 150, 200, _("\
You've recovered one of\n\
the stolen Power Stars!\n\
Now you can open some of\n\
the sealed doors in the\n\
castle.\n\
Try the Princess's room\n\
on the second floor and\n\
the room with the\n\
painting of Whomp's\n\
Fortress Floor 1.\n\
Bowser's troops are still\n\
gaining power, so you\n\
can't give up. Save us,\n\
Mario! Keep searching for\n\
Stars!"))

DEFINE_DIALOG(DIALOG_142, 1, 5, 150, 200, _("\
You've recovered three\n\
Power Stars! Now you can\n\
open any door with a 3\n\
on its star.\n\
\n\
You can come and go from\n\
the open courses as you\n\
please. The enemies ahead\n\
are even meaner, so be\n\
careful!"))

DEFINE_DIALOG(DIALOG_143, 1, 6, 150, 200, _("\
You've recovered eight of\n\
the Power Stars! Now you\n\
can open the door with\n\
the big Star! But Bowser\n\
is just ahead...can you\n\
hear the Princess calling?"))

DEFINE_DIALOG(DIALOG_144, 1, 6, 150, 200, _("\
You've recovered 30\n\
Power Stars! Now you can\n\
open the door with the\n\
big Star! But before you\n\
move on, how's it going\n\
otherwise?\n\
Did you pound the two\n\
columns down? You didn't\n\
lose your hat, did you?\n\
If you did, you'll have to\n\
stomp on the condor to\n\
get it back!\n\
They say that Bowser has\n\
sneaked out of the sea\n\
and into the underground.\n\
Have you finally\n\
cornered him?"))

DEFINE_DIALOG(DIALOG_145, 1, 6, 150, 200, _("\
You've recovered 50\n\
Power Stars! Now you can\n\
open the Star Door on the\n\
third floor. Bowser's\n\
there, you know.\n\
\n\
Oh! You've found all of\n\
the Cap Switches, haven't\n\
you? Red, green and blue?\n\
The Caps you get from the\n\
colored blocks are really\n\
helpful.\n\
Hurry along, now. The\n\
third floor is just ahead."))

DEFINE_DIALOG(DIALOG_146, 1, 6, 150, 200, _("\
You've found 70 Power\n\
Stars! The mystery of the\n\
endless stairs is solved,\n\
thanks to you--and is\n\
Bowser ever upset! Now,\n\
on to the final bout!"))

DEFINE_DIALOG(DIALOG_147, 1, 5, 30, 200, _("\
Are you using the Cap\n\
Blocks? You really should,\n\
you know.\n\
\n\
\n\
To make them solid so you\n\
can break them, you have\n\
to press the colored Cap\n\
Switches in the castle's\n\
hidden courses.\n\
You'll find the hidden\n\
courses only after\n\
regaining some of the\n\
Power Stars.\n\
\n\
The Cap Blocks are a big\n\
help! Red for the Wing\n\
Cap, green for the Metal\n\
Cap, blue for the Vanish\n\
Cap."))

DEFINE_DIALOG(DIALOG_148, 1, 6, 30, 200, _("\
Snowman Mountain ahead.\n\
Keep out! And don't try\n\
the Triple Jump over the\n\
ice block shooter.\n\
\n\
\n\
If you fall into the\n\
freezing pond, your power\n\
decreases quickly, and\n\
you won't recover\n\
automatically.\n\
//--The Snowman"))

DEFINE_DIALOG(DIALOG_149, 1, 5, 30, 200, _("\
Welcome to\n\
Princess Toadstool's\n\
secret slide!\n\
\n\
\n\
There's a Star hidden\n\
here that Bowser couldn't\n\
find.\n\
\n\
\n\
When you start to slide,\n\
press forward to speed\n\
up, pull back to slow\n\
down. If you slide really\n\
fast, you'll win the Star!"))

DEFINE_DIALOG(DIALOG_150, 1, 4, 30, 200, _("\
Who do you think you are?\n\
Now I'm soaked, and I'll\n\
have to repair the\n\
ceiling, too!"))

DEFINE_DIALOG(DIALOG_151, 1, 3, 30, 200, _("\
First you get me all wet,\n\
then you stomp on me!\n\
Now I'm really mad!"))

DEFINE_DIALOG(DIALOG_152, 1, 5, 30, 200, _("\
Owwch! Uncle! Uncle!\n\
Okay, I give. I guess it's\n\
not so bad without a\n\
ceiling--now I can see\n\
the stars at night.\n\
Speaking of stars, here,\n\
take this. Please come\n\
visit anytime!"))

DEFINE_DIALOG(DIALOG_153, 1, 3, 30, 200, _("\
Hey! Who's climbing on\n\
me? I think I'll blow\n\
you away!"))

DEFINE_DIALOG(DIALOG_154, 1, 5, 30, 200, _("\
Hold on to your hat! If\n\
you lose it, you'll be\n\
easily injured. If you\n\
lose it, look for it in the\n\
course where you lost it.\n\
Speaking of lost, the\n\
Princess is still stuck in\n\
the walls somewhere.\n\
Please help, Mario!\n\
\n\
Oh, you know that there\n\
are secret worlds in the\n\
walls as well as in the\n\
paintings, right?"))

DEFINE_DIALOG(DIALOG_155, 1, 6, 30, 200, _("\
Thanks to the power of\n\
the Stars, life is\n\
returning to the castle.\n\
Please, Mario, you have\n\
to give Bowser the boot!\n\
\n\
Here, let me tell you a\n\
little something about the\n\
castle. In the room with\n\
the mirrors, look carefully\n\
for anything that's not\n\
reflected in the mirror.\n\
And when you go to the\n\
water town, you can flood\n\
it with a high jump into\n\
the painting."))

DEFINE_DIALOG(DIALOG_156, 1, 5, 30, 200, _("\
The world inside the\n\
clock is so strange!\n\
When you jump inside,\n\
watch the position of\n\
the big hand!"))

DEFINE_DIALOG(DIALOG_157, 1, 5, 30, 200, _("\
Watch out! Don't let\n\
yourself be swallowed by\n\
quicksand.\n\
\n\
\n\
If you sink into the sand,\n\
you won't be able to\n\
jump, and if your head\n\
goes under, you'll be\n\
smothered.\n\
The dark areas are\n\
bottomless pits."))

DEFINE_DIALOG(DIALOG_158, 1, 6, 30, 200, _("\
1. If you jump repeatedly\n\
and time it right, you\n\
jump higher and higher.\n\
If you run really fast and\n\
time three jumps right,\n\
you can do a Triple Jump.\n\
2. Jump into a solid wall,\n\
then jump again when you\n\
hit the wall. You can\n\
bounce to a higher level\n\
using this Wall Kick."))

DEFINE_DIALOG(DIALOG_159, 1, 6, 30, 200, _("\
3. If you stop, press [Z]\n\
to crouch, then jump, you\n\
can perform a Backward\n\
Somersault. To do a Long\n\
Jump, run fast, press [Z],\n\
then jump."))

DEFINE_DIALOG(DIALOG_160, 1, 4, 30, 200, _("\
Press [B] while running\n\
fast to do a Body Slide\n\
attack. To stand while\n\
sliding, press [A] or [B]."))

#ifdef VERSION_EU
#define KEEP_ON_PLAYING ".."
#else
#define KEEP_ON_PLAYING "\n\
We want you to keep on\n\
playing, so we have a\n\
little something for you.\n\
We hope that you like it!\n\
Enjoy!!!"
#endif

DEFINE_DIALOG(DIALOG_161, 1, 6, 30, 200, _("\
Fantastic! They told me\n\
that I might see you if\n\
I hung around here, but\n\
I really didn't expect\n\
you to show up! I have a\n\
message for you.\n\
『Thanks for Playing, the\n\
Junuary Project! This hack\n\
couldn't have been done\n\
without your support.』\n\
Thank you all!\n\
From Project Dev Alieneer\n\
PS: Go back to that locked\n\
grate in the castle.\n\
Code for Level Select:\n\
Press [C]> & [C]< &\n\
[Z] & START\n\
at the Title Screen."))

DEFINE_DIALOG(DIALOG_162, 1, 5, 30, 200, _("\
Yeowww! It's you again!\n\
I really didn't mean to\n\
hide this Star from you...\n\
If you let me go, I'll give\n\
it to you. Honest."))

DEFINE_DIALOG(DIALOG_163, 1, 5, 30, 200, _("\
Noooo! You've really\n\
beaten me this time,\n\
Mario! I can't stand\n\
losing to you!\n\
\n\
My troops...worthless!\n\
They've turned over all\n\
the Power Stars! What?!\n\
There are 113 in all???\n\
\n\
Amazing! There were some\n\
in the castle that I\n\
missed??!!\n\
\n\
\n\
Now I see peace\n\
returning to the world...\n\
Oooo! I really hate that!\n\
I can't watch--\n\
I'm outta here!\n\
Just you wait until next\n\
time. Until then, keep\n\
that Control Stick\n\
smokin'!\n\
Buwaa ha ha!"))

DEFINE_DIALOG(DIALOG_164, 1, 5, 30, 200, _("\
I haven't raced in a long\n\
time, so I'm a bit rusty.\n\
How about a race?\n\
Ready...set...\n\
//Go//// Don't Go"))

DEFINE_DIALOG(DIALOG_165, 1, 5, 30, 200, _("\
I take no responsibility\n\
whatsoever for those who\n\
get dizzy and pass out\n\
from running around\n\
this post."))

DEFINE_DIALOG(DIALOG_166, 1, 4, 30, 200, _("\
I moved to Battle Field.\n\
So I'll stash this star\n\
somewhere safe for now.\n\
//--Koopa the Quick"))

DEFINE_DIALOG(DIALOG_167, 1, 4, 30, 200, _("\
Princess Toadstool's\n\
castle is just ahead.\n\
\n\
\n\
Press [A] to jump, [Z] to\n\
crouch, and [B] to punch,\n\
read a sign, or grab\n\
something.\n\
Press [B] again to throw\n\
something you're holding."))

DEFINE_DIALOG(DIALOG_168, 1, 4, 30, 200, _("\
Hey! Knock it off! That's\n\
the second time you've\n\
nailed me. Now I'm\n\
getting mad!"))

DEFINE_DIALOG(DIALOG_169, 1, 4, 30, 200, _("\
Keep out!\n\
Anyone entering this cave\n\
without permission will\n\
meet certain disaster."))
