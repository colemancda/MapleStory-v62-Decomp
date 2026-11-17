/* FUN_00889b56 - 0x00889b56 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00889b56(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  BOOL BVar7;
  DWORD DVar8;
  DWORD *pDVar9;
  undefined4 *puVar10;
  
  if ((param_2 != 4) && (param_2 != 3)) {
    if ((param_1 == 2) || (((param_1 == 0x15 || (param_1 == 0x16)) || (param_1 == 0xf)))) {
      FUN_0087d9ec(1);
      if (((param_1 == 2) || (param_1 == 0x15)) && (DAT_00980a10 == 0)) {
        BVar7 = SetConsoleCtrlHandler((PHANDLER_ROUTINE)&LAB_00889cd8,1);
        if (BVar7 != 1) {
          DVar8 = GetLastError();
          pDVar9 = (DWORD *)FUN_0087fc8d();
          *pDVar9 = DVar8;
          FUN_0087da4d(1);
          goto LAB_00889c8c;
        }
        DAT_00980a10 = 1;
      }
      iVar3 = DAT_00980a0c;
      iVar2 = DAT_00980a08;
      iVar1 = DAT_00980a04;
      iVar4 = DAT_00980a00;
      if (param_1 == 2) {
        DAT_00980a00 = param_2;
        param_2 = iVar4;
      }
      else if (param_1 == 0xf) {
        DAT_00980a0c = param_2;
        param_2 = iVar3;
      }
      else if (param_1 == 0x15) {
        DAT_00980a04 = param_2;
        param_2 = iVar1;
      }
      else if (param_1 == 0x16) {
        DAT_00980a08 = param_2;
        param_2 = iVar2;
      }
      FUN_0087da4d(1);
      return param_2;
    }
    if (((param_1 == 8) || (param_1 == 4)) || (param_1 == 0xb)) {
      iVar4 = FUN_0087e371();
      if (*(undefined **)(iVar4 + 0x50) == &DAT_009703a0) {
        pvVar5 = _malloc(DAT_00970420);
        *(void **)(iVar4 + 0x50) = pvVar5;
        if (pvVar5 == (void *)0x0) goto LAB_00889c8c;
        FUN_00879c20(pvVar5,&DAT_009703a0,DAT_00970420);
      }
      uVar6 = FUN_00889ebc(param_1,*(undefined4 *)(iVar4 + 0x50));
      if (uVar6 != 0) {
        iVar1 = *(int *)(uVar6 + 8);
        do {
          if (*(int *)(uVar6 + 4) != param_1) {
            return iVar1;
          }
          *(int *)(uVar6 + 8) = param_2;
          uVar6 = uVar6 + 0xc;
        } while (uVar6 < (uint)(*(int *)(iVar4 + 0x50) + DAT_00970424 * 0xc));
        return iVar1;
      }
    }
  }
LAB_00889c8c:
  puVar10 = (undefined4 *)FUN_0087fc84();
  *puVar10 = 0x16;
  return -1;
}


