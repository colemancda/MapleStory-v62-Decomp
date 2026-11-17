/* FUN_007e1328 - 0x007e1328 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_007e1328(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_004bc4fa();
  extraout_ECX[0x1d] = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1f] = 0;
  iVar1 = extraout_ECX[0x1d];
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *extraout_ECX = &PTR_FUN_008f1ee0;
  extraout_ECX[1] = &PTR_LAB_008f1e94;
  extraout_ECX[2] = &PTR_FUN_008f1e90;
  if (iVar1 == 0) {
    puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x11cc);
    uVar2 = *puVar3;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_004bc5f0(uVar2,1,0);
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  else if (iVar1 == 1) {
    puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x11cd);
    uVar2 = *puVar3;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_004bc5f0(uVar2,1,0);
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  else if (iVar1 == 2) {
    puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x11d1);
    uVar2 = *puVar3;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_004bc5f0(uVar2,1,0);
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  else {
    if (iVar1 != 3) goto LAB_007e1435;
    puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x11d2);
    uVar2 = *puVar3;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_004bc5f0(uVar2,1,0);
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  FUN_00402676();
LAB_007e1435:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


