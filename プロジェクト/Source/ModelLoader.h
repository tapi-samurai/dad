#pragma once
#include "LoaderBase.h"

class ModelLoader : public LoaderBase
{
private:
	int LoadResource(const char* dataName) override;
	void DeleteResource(int handle) override;

	int GetDuplication(int handle) override;

public:
	// シングルトン
	static ModelLoader* GetInstance()
	{
		static ModelLoader instance;
		return &instance;
	}
};