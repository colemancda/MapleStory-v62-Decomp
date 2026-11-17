/* FUN_00405a23 - 0x00405a23 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00405a23(void)

{
  short sVar1;
  short *psVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_EBP;
  
  FUN_00879bb8();
  psVar2 = *(short **)(unaff_EBP + 0xc);
  sVar1 = *psVar2;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (sVar1 == 8) {
    uVar3 = *(undefined4 *)(psVar2 + 4);
    psVar2[4] = 0;
    psVar2[5] = 0;
    *psVar2 = 0;
    FUN_00402ee6(uVar3,0);
  }
  else {
    VariantInit((VARIANTARG *)(unaff_EBP + -0x20));
    *(undefined4 *)(unaff_EBP + -4) = 1;
    iVar4 = FUN_00402bed(unaff_EBP + -0x20,psVar2,0,8);
    if (iVar4 < 0) {
      FUN_008795da(iVar4,0);
    }
    uVar3 = *(undefined4 *)(unaff_EBP + -0x18);
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined2 *)(unaff_EBP + -0x20) = 0;
    FUN_00402ee6(uVar3,0);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x20);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 8);
}


