/* FUN_0045cf62 - 0x0045cf62 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_0045cf62(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  ushort local_18;
  ushort local_16;
  ushort local_14;
  ushort local_12;
  uint local_8;
  
  iVar3 = 0;
  local_8 = 0;
  do {
    iVar5 = *(int *)(param_1 + 0x4c);
    if ((iVar5 == 0) || (*(uint *)(iVar5 + -4) <= local_8)) {
      return 0;
    }
    piVar4 = (int *)(iVar3 + iVar5);
    iVar5 = 0;
    piVar2 = piVar4;
    do {
      piVar2 = piVar2 + 1;
      if (*piVar2 == 0) break;
      if (*piVar2 == param_2) {
        (*DAT_0097b4a8)(&local_18);
        uVar1 = piVar4[0xe];
        iVar3 = ((uint)local_18 * 100 + (uint)local_16) * 100 + (uint)local_12;
        if ((uVar1 & 2) != 0) {
          if (iVar3 < piVar4[0xf]) {
            return 0;
          }
          if (piVar4[0x10] < iVar3) {
            return 0;
          }
        }
        if (((uVar1 & 4) != 0) && (piVar4[local_14 + 0x13] == 0)) {
          return 0;
        }
        if ((uVar1 & 8) != 0) {
          if (iVar3 < piVar4[0x11]) {
            return 0;
          }
          if (piVar4[0x12] + -1 < iVar3) {
            return 0;
          }
        }
        if ((uVar1 & 1) == 0) {
          return 1;
        }
        if (piVar4[0xd] < 1) {
          return 0;
        }
        return 1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 10);
    local_8 = local_8 + 1;
    iVar3 = iVar3 + 0x68;
  } while( true );
}


