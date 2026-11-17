/* FUN_0088b894 - 0x0088b894 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0088b894(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  HANDLE hFile;
  BOOL BVar4;
  DWORD DVar5;
  DWORD *pDVar6;
  int iVar7;
  undefined1 local_1008 [4064];
  undefined4 uStackY_28;
  undefined4 uStackY_24;
  undefined4 uStackY_20;
  
  FUN_0087a1b0();
  iVar7 = 0;
  iVar1 = FUN_00885f7f();
  if ((iVar1 == -1) || (iVar1 = FUN_00885f7f(), iVar1 == -1)) {
    iVar7 = -1;
  }
  else {
    param_2 = param_2 - iVar1;
    if (param_2 < 1) {
      if (param_2 < 0) {
        uStackY_20 = 0x88b965;
        FUN_00885f7f();
        uStackY_20 = param_1;
        uStackY_24 = 0x88b96d;
        hFile = (HANDLE)FUN_00888bc5();
        BVar4 = SetEndOfFile(hFile);
        iVar7 = (BVar4 != 0) - 1;
        if (iVar7 == -1) {
          puVar3 = (undefined4 *)FUN_0087fc84();
          *puVar3 = 0xd;
          DVar5 = GetLastError();
          pDVar6 = (DWORD *)FUN_0087fc8d();
          *pDVar6 = DVar5;
        }
      }
    }
    else {
      uStackY_20 = 0x88b8f4;
      _memset(local_1008,0,0x1000);
      uStackY_20 = 0x8000;
      uStackY_24 = param_1;
      uStackY_28 = 0x88b901;
      FUN_0088bf7d();
      do {
        uStackY_20 = 0x88b91f;
        iVar1 = FUN_00886057();
        if (iVar1 == -1) {
          piVar2 = (int *)FUN_0087fc8d();
          if (*piVar2 == 5) {
            puVar3 = (undefined4 *)FUN_0087fc84();
            *puVar3 = 0xd;
          }
          iVar7 = -1;
          break;
        }
        param_2 = param_2 - iVar1;
      } while (0 < param_2);
      FUN_0088bf7d();
    }
    uStackY_20 = 0x88b9ab;
    FUN_00885f7f();
  }
  return iVar7;
}


