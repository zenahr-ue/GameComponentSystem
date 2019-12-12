#include "GameProcess.h"
#include "GameProcessManager.h"

GameProcess::GameProcess()
{
}

GameProcess::~GameProcess()
{
}

//メインでの処理内容
//起動
void GameProcess::StartUp(void)
{
	GameProcessManager::Init();
}

//実行
void GameProcess::Run(void)
{
	//for (;;)
	if(true)
	{
		GameProcessManager::ProcessInput();
		GameProcessManager::Update();
		GameProcessManager::GenerateOutput();
	}
}

//終了化処理
void GameProcess::ShutDown(void)
{
	GameProcessManager::Uninit();
}