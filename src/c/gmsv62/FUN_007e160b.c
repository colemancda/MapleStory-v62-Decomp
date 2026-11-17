/* FUN_007e160b - 0x007e160b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_007e160b(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x18) = extraout_ECX;
  FUN_004bc4fa();
  iVar1 = *(int *)(unaff_EBP + 0xc);
  extraout_ECX[0x1d] = *(undefined4 *)(unaff_EBP + 8);
  extraout_ECX[0x1e] = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x20] = 0;
  extraout_ECX[0x22] = 0;
  *extraout_ECX = &PTR_FUN_008f1f68;
  extraout_ECX[1] = &PTR_LAB_008f1f1c;
  extraout_ECX[2] = &PTR_FUN_008f1f18;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar2 = extraout_ECX[0x1d];
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (iVar2 == 0) {
    puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x14,0x11e8);
    uVar3 = *puVar4;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_0041354c(unaff_EBP + -0x10,uVar3,iVar1 == 0);
    *(undefined1 *)(unaff_EBP + -4) = 3;
  }
  else if (iVar2 == 1) {
    puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + 0xc,0x11e9);
    uVar3 = *puVar4;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_0041354c(unaff_EBP + -0x10,uVar3,iVar1 == 0);
    *(undefined1 *)(unaff_EBP + -4) = 3;
  }
  else {
    if (iVar2 != 2) goto LAB_007e1716;
    puVar4 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x11ea);
    uVar3 = *puVar4;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_0041354c(unaff_EBP + -0x10,uVar3,iVar1 == 0);
    *(undefined1 *)(unaff_EBP + -4) = 3;
  }
  FUN_00402676();
LAB_007e1716:
  FUN_004bc5f0(*(undefined4 *)(unaff_EBP + -0x10),1,0);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


