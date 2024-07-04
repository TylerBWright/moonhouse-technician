#pragma once

#include "Global.h"

#include <array>
#include <format>

class TextStrings
{
public:

	TextStrings(Global& global)
		: global_{ global }
	{
		// Empty
	}

	Global& global_;

	std::string getManInTheMoon(int idx)
	{
		std::array<std::string, 23> textStrings = {
			"You spy the Man-in-the-moon lounging in a hammock reading a book, 'The Merry Adventures of Robin Hood,' by Howard Pyle. Every few seconds he is heard rolling in laughter. He knows you're there but refuses to look up to meet your gaze. It must be a good book.",
			"The Man-in-the-moon's grin is somehow larger than usual. He must be pleased to see you.",
			"You stand before the Man-in-the-moon. He reminds you somewhat of the storekeeper a block down from your house, only hairier and crinklier. He is the most ancient specimen of human the world over.",
			"The Man-in-the-moon inhales the sweet smoke from his pipe and exhales a curling serpent that dissolves into the moon-house vents overhead. He appears quite Alice in Wonderland Caterpillary standing there!",
			std::format("Man-in-the-moon: 'How do you do, {0}?'", global_.name_),
			"Man-in-the-moon: 'The truth is that nobody remains in the moon-house for long; few of us have the constitution for lengthy stays. In fact, the only permanent residents here are me, the Moon-Angel, and our keeper of the garden. I 'spose I am a bit of a housecat muhself! Har!'",
			"The Man-in-the-moon is seen pacing throughout the kitchen brewing and patching and mending the forgotten things. I would attempt to describe these activities to you, except I fear that I would be unable to adequately convey the cacophony of activity that unfolds in this queer place. I'm just the narrator and I don't get paid enough to do that.",
			"Man-in-the-moon: 'I hear that my colleague the Moon-Angel carries a very rare playing card. He's a prickly fella at times, but underneath all that moon mist is a heart of silver. I'm certain that you'll get through to him one of these days.'",
			"Man-in-the-moon: 'You are permitted to visit the garden behind the moon on Saturdays. We have a class of children being taught by our diligent teacher. Despite being a master pedagogue, there is always room for an assistant to lend a heart. Who knows; she might even part with a gift!'",
			"Man-in-the-moon: 'Normally I might have something erudite to say; perhaps something to aid you in your happenings around here. This is not one of those moments, my dear child.' The Man-in-the-moon goes back to smoking his long tobacco pipe.",
			"Man-in-the-moon: 'The Moon-Angel and I each have our individual areas of expertise. He makes sense of the cosmic happenings outside of the moon-windows. I am a much simpler tenant. But the Moon-Angel doesn't share as much as he had in times past, so good luck getting anything out of him. Immortality hits each of us differently, or so it seems.'",
			"The Man-in-the-moon is feeling a bit under the weather, sneezing through his whiskers and sniffling through puffy eyes. He is busy now with his knitting, but he never neglects the opportunity to welcome a guest.",
			"The Man-in-the-moon is deep in his scholarship of the almanac by candlelight. He looks up and greets you, signaling with his eyes a brief and welcome reprieve from his late-night studies.",
			"The Man-in-the-moon truly is a Renaissance man of sorts as he seems to always be doing something different whenever you visit him. This time he is really moving about in his ambidextrous way and muttering all the while under his breath.",
			std::format("Man-in-the-moon: 'Tell me {0}, had the earthlings won the War of 1812? One of our last child visitors spoke of it through hushed whispers but had not returned to satiate my curiosity. Why, he must have his own face of gray whiskers now! Hrm.'", global_.name_),
			std::format("Man-in-the-moon: 'Would you like to hear me play the fiddle, {0}?'", global_.name_),
			"Be careful, the Man-in-the-moon is in a strong storytelling mood this evening!",
			"Man-in-the-moon: 'I don't personally understand the appeal of these playing cards, but apparently the kids love 'em. As the years marched on, less children visited us. Eventually we had to place moon-house technician advertisements in local newspapers, but those ads lost their charm and we had to get creative. Well, one day the Moon-Angel peered through the windows on the second floor and discovered the juvenile sport of cards. More of a collector of sea periwinkles muhself, but who am I to judge?'",
			"You startled the Man-in-the-moon as his back was turned to you. But it doesn't end there; he was in the middle of flipping a flapjack. Pancake batter is everywhere, and yet the Man-in-the-moon still manages a howl of laughter in spite of the mess.",
			std::format("The Man-in-the-moon is searching frantically for something. 'Where's muh pipe, {0}? This cannot be happening to me right now.' You spy the very article poking through his mane of gray hair and point. He feels relief in his embarrassment, regains his composure, and resumes his puffing.", global_.name_),
			"Man-in-the-moon: 'There was one lad, David, who came around these parts. He grew into a very capable hero; having bested the Iron Man and saved the dear Princess Aurelia on his black steed. Truly a legend! Despite his glowing paladin achievements, I am still of the mind that his proficiency in star-polishing is the real unspoken story here. An expert moon-house technician is a thankless job, but one with seismic implications that knows no bounds... Yes sir, he was the best darn moon-calf we ever had.'",
			"Man-in-the-moon: 'The Moon-Angel doesn't often pay me a visit here in the moon-kitchen. I believe the last time was some thirty-seven years back when I locked myself in that-there cupboard up there. I wish I had a better story for you, but that's all I've got. Ha!'",
			"The Man-in-the-moon repeats a story from before, but you listen to every word, paying careful attention to the minute alterations that this version provides. You do not dare confront him on these embellishments as he has turned into something of a grandfather figure to you."
		};
		return textStrings[idx];
	};

	std::string getGarden(int idx)
	{
		std::array<std::string, 12> textStrings = {
			"The children were particularly playful today! You were able to help one little boy named Ronnie with his timidness, and by the end of the day he was darting this way and that throughout the garden. The children were saddened to see you go.",
			"You can tell that the children really adore the lady of the garden in the way that they follow alongside her and play with her hair. While you are one of the eldest of the bunch and are expected to assume some degree of maturity in your assistant role, you often feel as though you are the one being doted on by the Beautiful Lady. It cannot be helped.",
			"The Beautiful Lady had you cut up some melon and pass it out to the children, but when one child was caught two others would flee! This back-and-forth rigmarole kept you busy today, and you're just about ready to call it a day. Still, it is a rare treat to be able to see other children. It gets rather lonely when the Man-in-the-moon and the Moon-Angel are the only persons keeping you company. One is an eccentric hobbyist and the other an aloof cosmic entity--both too preoccupied to care for a child.",
			"The Beautiful Lady had a great idea for a game today! Four teams of children would compete in a map-making contest. The first team with a complete map of the garden behind the moon wins! You sent each member of your team to chart a particular area and then return to the meetup point. Your team did not win, but everybody learned something about cartography and entomology.",
			"You put in a good day's work in the garden as the teacher's assistant, but much of your time was deep in contemplation, with an inordinate amount of time devoted to the Beautiful Lady. Why is she here? Where does she come from? You've also never seen her cross with the children, which is quite unlike the teachers of your world. In fact, you've never seen her without a smile, so delightful is she.",
			"You play logic puzzles under some variety of flora extinct in your world--a large cycad? Who would have thought that the garden behind the Moon would be so lush and, dare I say, forbidden? Logic puzzles under the stars and with good company--a truly delectable state of affairs!",
			"When asked why you have to leave the moon-house on your twelfth birthday, the Beautiful Lady responds simply that 'you must grow up.' This statement leaves you wondering what that coveted state of adulthood is like. Will you depart from your present being in remarkable ways, like a cicada after a good molt? Will your priorities shift, like which side of the egg ought to be excavated first--and other matters of life besides?",
			"You are beginning to feel like a permanent frequenter of the moon-house or even a member of its royal court. The Beautiful Lady must have sensed this emotion roll over you for she was sure to remind you that the lunar year is nearly over. You were informed before that your stay in the moon-house is a fleeting one, but one year still seems like a long time to you.",
			"Beautiful Lady: 'The Moon-Angel does occasionally visit us in the garden; however he is typically lost in his thinking and world-building and merely drifts past us. The Man-in-the-moon is a bit of a shut-in hermit type. We do not receive too many outside visitors--but now you're here. Why, you remind me a bit of David in the way that you give much of yourself to the welfare of the garden's children. You are a born leader!'",
			"Today was nickelodeon day in the garden behind the moon. You helped usher the children to their seats and tried to keep them there while the motion pictures flickered. The children now look up to you like an older sibling, entrusting you to make the right decisions for them. While they were enamored in whatever scenes were presented to them on this eve, you were busy watching them and committing them to memory. They became almost like siblings... brother and sister moon-calfs in the garden behind the moon.",
			"Despite having already received a playing card for your volunteer efforts to date, you find that you still take the time to visit the Beautiful Lady and the children. You know that your days here are coming to a close. But do not worry about that for now! You are here and that's all that matters right now. You spend every last moment with the children, valuing each interaction and touched heart.",
			"Today will be your last experience in the garden behind the moon, so make it count. You spend the day exploring with friends in tow every field, statue, row of cabbage, and game parlour. Everybody laughs and shares jokes, including the Beautiful Lady who has as good a riddle as any. You argue over which tree is the elder of the bunch, how many bands an armadillo has, and other epiphanies set at random like the smattering of the stars above. You give each child a hug before a final embrace with the Beautiful Lady, and so it ends.",
		};
		return textStrings[idx];
	}

	std::string getManInTheMoonCardResponse(int idx)
	{
		std::array<std::string, 8> textStrings = {
			"Man-in-the-moon: 'Behold the card of the moon-calf! A sweet boy if I'll recall, now up to princely things. Too busy to visit us old moon farts! You could have learned a thing or two from him.'",
			"Man-in-the-moon: 'Hans Kraut the cobbler was star-struck. He's a good friend of ours and one of the only men with one foot still firmly planted in the moon-house.'",
			"Man-in-the-moon: 'I don't know the first thing about babies, but the Moon-Angel has a soft sport for 'em! By the way, your card needs a diaper change.'",
			"Man-in-the-moon: 'Phyllis laughed like a peal of silver bells and loved to sing! I hear that she and David are married now. They grow up so fast!\n\nA single tear drops from the Man-in-the-moon's eye and lands in his moustache. A happy crier is he.",
			"Man-in-the-moon: 'In the Land of Nowhere lives an old woman in a red petticoat and she washes the souls of men. A little on the phantasmic side, eh?'",
			"Man-in-the-moon: 'Every hero needs a noble steed! Around here we have a saying--the more wings the better.'",
			"Man-in-the-moon: 'Here is the mighty iron man card! Wait, what's that noise?!'\n\nThe Main-in-the-moon raises his cupped hand to one ear as if to listen. Suddenly you hear a KER-CLANK fill the moon-kitchen! Your eyes dart about the room, and you identify the culprit--a pile of cooking pots kicked over under the table by a trickster.\n\nMan-in-the-moon: 'It's the IRON MAN! Somebody call for David the great iron man slayer! The moon-house is doomed!'\n\nThe Man-in-the-moon is fully convinced that he fooled you. So joyful is he that you allow him to revel in his moment.",
			"Man-in-the-moon: 'The King card. He's the fairytale type to show up once in the prologue of a story and then in the concluding chapter. I know his type!'",
		};
		return textStrings[idx];
	}

	std::string getMoonAngel(int idx)
	{
		std::array<std::string, 6> textStrings = {
			"The Moon-Angel ignores you. He does not appear to be interested in engaging in conversation with you... or anybody else for that matter.",
			"The Moon-Angel brushes you away and resumes his stargazing.",
			"The Moon-Angel shares a few brief emotionless pleasantries before departing... doing whatever moon angels do out there in the cosmos.",
			"Moon-Angel: 'You are a chatty little fellow, aren't you?'",
			"Moon-Angel: 'Good day. Are you enjoying your stay in the moon-house?'",
			std::format("Moon-Angel: 'Good day {0}.'", global_.name_),
		};
		return textStrings[idx];
	}
};
