/* FUN_00701dc6 - 0x00701dc6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00701dc6(int param_1,uint param_2)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint local_c;
  undefined1 local_5;
  
  if (param_2 < 3000) {
LAB_00701e72:
    if (param_2 < 4000) goto LAB_00701f0f;
    iVar3 = 0;
    if (*(int *)(DAT_0097926c + 0x80) != 0) {
      iVar3 = *(int *)(*(int *)(DAT_0097926c + 0x80) + -4);
    }
    if (iVar3 * 3 + 4000U <= param_2) goto LAB_00701f0f;
    piVar1 = (int *)(param_1 + 0x574);
    uVar5 = (int)(param_2 - 4000) / 8 + 1;
    uVar4 = 0;
    if (*piVar1 != 0) {
      uVar4 = *(uint *)(*piVar1 + -4);
    }
    if (uVar4 < uVar5) {
      if (*piVar1 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(uint *)(*piVar1 + -4);
      }
      FUN_0045ebec(uVar5,0,&local_5);
      for (; (iVar3 = *piVar1, iVar3 != 0 && (uVar4 < *(uint *)(iVar3 + -4))); uVar4 = uVar4 + 1) {
        *(undefined1 *)(iVar3 + uVar4) = 0;
      }
    }
    pbVar2 = (byte *)(*piVar1 + -1 + uVar5);
    *pbVar2 = *pbVar2 & ~('\x01' << ((byte)(param_2 - 4000) & 7));
  }
  else {
    iVar3 = 0;
    if (*(int *)(DAT_0097926c + 0x80) != 0) {
      iVar3 = *(int *)(*(int *)(DAT_0097926c + 0x80) + -4);
    }
    if (iVar3 * 3 + 3000U <= param_2) goto LAB_00701e72;
    piVar1 = (int *)(param_1 + 0x574);
    uVar5 = (int)(param_2 - 3000) / 8 + 1;
    uVar4 = 0;
    if (*piVar1 != 0) {
      uVar4 = *(uint *)(*piVar1 + -4);
    }
    if (uVar4 < uVar5) {
      if (*piVar1 == 0) {
        local_c = 0;
      }
      else {
        local_c = *(uint *)(*piVar1 + -4);
      }
      FUN_0045ebec(uVar5,0,&local_5);
      for (; (iVar3 = *piVar1, iVar3 != 0 && (local_c < *(uint *)(iVar3 + -4)));
          local_c = local_c + 1) {
        *(undefined1 *)(iVar3 + local_c) = 0;
      }
    }
    pbVar2 = (byte *)(*piVar1 + -1 + uVar5);
    *pbVar2 = *pbVar2 | '\x01' << ((byte)(param_2 - 3000) & 7);
  }
  FUN_00700788(1);
LAB_00701f0f:
  FUN_0078a282(param_2);
  return;
}


