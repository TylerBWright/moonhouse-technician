#pragma once

#include "Card.h"

#include <string>
#include <vector>

class Global
{
public:
  Global()
    : name_{ "" }
    , engraving_{ "" }
    , response_{ "" }
    , dayNumber_{ 0 }
    , numCredits_{ 0 }
    , gardenVisitationNumber_{ 0 }
    , windowVisitationNumber_{ 0 }
    , moonAngelVisitationNumber_{ 0 }
    , moonAngelMood_{ 0 }
    , moonAngelCadence_{ 0 }
    , workCadence_{ 0 }
    , gardenCadence_{ 0 }
  {
    cards_ = {
      Card("MAN IN THE MOON"),
      Card("MOON CALF", 10),
      Card("MASTER COBBLER", 10),
      Card("BABY", 20),
      Card("PHYLLIS", 20),
      Card("OLD WOMAN", 30),
      Card("BLACK HORSE", 30),
      Card("IRON MAN", 60),
      Card("KING", 120),
      Card("MOON ANGEL"),
      Card("BEAUTIFUL LADY"),
      Card("PRINCESS AURELIA"),
      Card("YOU"),
    };
  }

  std::string name_;
  std::string engraving_;
  std::string response_;
  int dayNumber_;
  int numCredits_;
  int gardenVisitationNumber_;
  int windowVisitationNumber_;
  int moonAngelVisitationNumber_;
  int moonAngelMood_;
  int moonAngelCadence_;
  int workCadence_;
  int gardenCadence_;
  std::vector<Card> cards_;
};
