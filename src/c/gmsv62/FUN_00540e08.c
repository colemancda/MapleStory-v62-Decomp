/* FUN_00540e08 - 0x00540e08 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_00540e08(int param_1,int param_2,int param_3)

{
  int iVar1;
  DWORD DVar2;
  int *piVar3;
  
  if (param_3 < 0x17) {
    if (*(int *)(*(int *)(param_1 + 0x90) + 0x68) == 4) {
      iVar1 = 0;
      piVar3 = &DAT_00965574;
      do {
        if (param_2 < *piVar3) {
          if (*(int *)(param_1 + 0x8c) == iVar1) {
            return -1;
          }
          *(int *)(param_1 + 0x8c) = iVar1;
          return iVar1;
        }
        piVar3 = piVar3 + 1;
        iVar1 = iVar1 + 1;
      } while ((int)piVar3 < 0x965584);
    }
    else {
      iVar1 = 0;
      piVar3 = &DAT_00965560;
      do {
        if (param_2 < *piVar3) {
          if (*(int *)(param_1 + 0x8c) == iVar1) {
            return -1;
          }
          *(undefined4 *)(param_1 + 0xcc) = 1;
          *(undefined4 *)(param_1 + 0xd0) = 1;
          *(int *)(param_1 + 0x8c) = iVar1;
          FUN_00414edd(&DAT_00978474,0xffffffff);
          FUN_0052b501(0,0,0,0);
          return iVar1;
        }
        piVar3 = piVar3 + 1;
        iVar1 = iVar1 + 1;
      } while ((int)piVar3 < 0x965574);
    }
  }
  else {
    iVar1 = 0;
    piVar3 = &DAT_00965584;
    do {
      if (param_2 < *piVar3) {
        if (iVar1 == 1) {
          return -1;
        }
        if (iVar1 == 3) {
          return -1;
        }
        if (*(int *)(param_1 + 0xd0) == iVar1) {
          *(int *)(param_1 + 0xcc) = (*(int *)(param_1 + 0xcc) + 1) % 2;
        }
        else {
          *(int *)(param_1 + 0xd0) = iVar1;
        }
        if ((*(int *)(param_1 + 0x8c) == 0) && (*(int *)(param_1 + 0xd0) != 1)) {
          return -1;
        }
        DVar2 = timeGetTime();
        if (DVar2 - *(int *)(param_1 + 0xd4) < 1000) {
          return -1;
        }
        DVar2 = timeGetTime();
        *(DWORD *)(param_1 + 0xd4) = DVar2;
        FUN_008161f1();
        return *(int *)(param_1 + 0x8c);
      }
      piVar3 = piVar3 + 1;
      iVar1 = iVar1 + 1;
    } while ((int)piVar3 < 0x96559c);
  }
  return -1;
}


