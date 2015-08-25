// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class HttpRequest : ModuleRules
{
	public HttpRequest(TargetInfo Target)
	{
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

        PrivateDependencyModuleNames.AddRange(new string[] {"HTTP"});

        PrivateIncludePathModuleNames.AddRange(new string[] {"HTTP"});
	}


}
