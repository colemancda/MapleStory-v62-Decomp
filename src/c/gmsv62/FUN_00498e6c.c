/* FUN_00498e6c - 0x00498e6c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00498e6c(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar4;
  
  FUN_00879bb8();
  iVar1 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x20))();
  if ((iVar1 == 0) || (*(int *)(extraout_ECX + 0x5c) != 0)) goto LAB_00498f63;
  iVar1 = *(int *)(unaff_EBP + 8);
  *(int *)(extraout_ECX + 0x50) = iVar1;
  if ((iVar1 != 0) && (*(int *)(unaff_EBP + 0xc) == 0)) {
    if ((*(int *)(extraout_ECX + 0x24) == 0) ||
       (iVar2 = (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x24) + 4) + 0x48))(&DAT_0097be40),
       iVar2 == 0)) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(extraout_ECX + 0x24);
    }
    if ((iVar2 == 0) || (*(int *)(extraout_ECX + 0x14) != 1000)) {
      uVar4 = 4;
    }
    else {
      uVar4 = 6;
    }
    FUN_00526a75(uVar4);
  }
  if (*(int *)(extraout_ECX + 0x58) != 0) goto LAB_00498f63;
  if (*(int *)(extraout_ECX + 0x54) == 0) {
    if (iVar1 != 0) {
      FUN_00498f74(3);
      if (*(int *)(unaff_EBP + 0xc) != 0) goto LAB_00498f63;
      puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + 0xc,0x5a8);
      uVar4 = *puVar3;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_007d3cdd(uVar4);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00402676();
      goto LAB_00498f3f;
    }
LAB_00498f48:
    FUN_00498f74(0);
    if (*(int *)(unaff_EBP + 0xc) != 0) goto LAB_00498f63;
    iVar1 = **(int **)(extraout_ECX + 0x24);
    uVar4 = 0;
  }
  else {
    if (iVar1 == 0) goto LAB_00498f48;
    FUN_00498f74(1);
    if (*(int *)(unaff_EBP + 0xc) != 0) goto LAB_00498f63;
LAB_00498f3f:
    iVar1 = **(int **)(extraout_ECX + 0x24);
    uVar4 = 1;
  }
  (**(code **)(iVar1 + 0x1c))(*(undefined4 *)(extraout_ECX + 0x14),0x65,uVar4);
LAB_00498f63:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


