/* FUN_00883c95 - 0x00883c95 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00883c95(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_00888bc5(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_00888bc5(2);
      iVar2 = FUN_00888bc5(1);
      if (iVar2 == iVar1) goto LAB_00883ce3;
    }
    hObject = (HANDLE)FUN_00888bc5(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_00883ce5;
    }
  }
LAB_00883ce3:
  DVar4 = 0;
LAB_00883ce5:
  FUN_00888b46(param_1);
  *(undefined1 *)((&DAT_00980ee0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_0087fc11(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}


