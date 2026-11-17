/* FUN_0086d340 - 0x0086d340 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0086d340(char *param_1,DWORD param_2)

{
  char cVar1;
  DWORD DVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  DVar2 = GetModuleFileNameA((HMODULE)0x0,param_1,param_2);
  if (DVar2 != 0) {
    puVar3 = (undefined1 *)FUN_0087cf51(param_1,0x5c);
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = 0;
      return 1;
    }
    uVar4 = 0xffffffff;
    pcVar6 = &DAT_0096dffc;
    do {
      pcVar7 = pcVar6;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar6 = pcVar7 + -uVar4;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)param_1 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      param_1 = param_1 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *param_1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      param_1 = param_1 + 1;
    }
    return 1;
  }
  uVar4 = 0xffffffff;
  pcVar6 = &DAT_0096dffc;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar7 + -uVar4;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)param_1 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    param_1 = param_1 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *param_1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    param_1 = param_1 + 1;
  }
  return 0;
}


