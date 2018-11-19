/*	JSON Query Plugin
	Copyright(C) 2015-2018 Stefan 'Stefander' Wijnker
	Special thanks: RVillani, Zakkar, Kheka, conneich, Patrik2991, Quantum & johnbo (Unreal forums)

	This program is free software : you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program. If not, see <http://www.gnu.org/licenses/>.
*/
using UnrealBuildTool;

public class JSONQuery : ModuleRules
{
	public JSONQuery(ReadOnlyTargetRules Rules) : base(Rules)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(
			new string[] { 
				"Core", 
				"CoreUObject",
				"Engine",
				"HTTP",
				"Json"
			}
		);
	}
}
