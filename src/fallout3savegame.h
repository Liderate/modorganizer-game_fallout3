#ifndef FALLOUT3SAVEGAME_H
#define FALLOUT3SAVEGAME_H

#include "gamebryosavegame.h"

class GameFallout3;

class Fallout3SaveGame : public GamebryoSaveGame
{
public:
  Fallout3SaveGame(QString const& fileName, GameFallout3 const* game);

protected:
  // Fetch easy-to-access information.
  void fetchInformationFields(FileWrapper& wrapper, unsigned long& width,
                              unsigned long& height, unsigned long& saveNumber,
                              QString& playerName, unsigned short& playerLevel,
                              QString& playerLocation) const;

  std::unique_ptr<DataFields> fetchDataFields() const override;
};

#endif  // FALLOUT3SAVEGAME_H
