/* FUN_007d3d3e - 0x007d3d3e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007d3d3e(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 0xc) == 0x1d) {
    uVar1 = FUN_00679d86(unaff_EBP + -0x14,0x10);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00419192(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00402676();
    *(undefined4 *)(unaff_EBP + 0xc) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x18,0x876);
    uVar1 = *puVar2;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_0041354c(unaff_EBP + 0xc,uVar1,*(undefined4 *)(unaff_EBP + 8),
                 *(undefined4 *)(unaff_EBP + -0x10));
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00402676();
    FUN_00433c19(*(undefined4 *)(unaff_EBP + 0xc),100,0);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00402676();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00402676();
  }
  else {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00402676();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


