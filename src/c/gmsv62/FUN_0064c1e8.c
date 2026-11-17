/* FUN_0064c1e8 - 0x0064c1e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0064c1e8(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (0 < *(int *)(unaff_EBP + 0xc)) {
    do {
      FUN_004184ca(&PTR_LAB_009683b4,0xffffffff);
      FUN_0087a1b0();
      uVar1 = FUN_0087a25a(*(undefined4 *)(unaff_EBP + -0x10),&stack0xffffffe0,10);
      uVar2 = FUN_0087a007(uVar1);
      FUN_0046febf(uVar1,uVar2);
      puVar3 = *(undefined4 **)(*(int *)(unaff_EBP + 8) + 0x5c);
      if (puVar3 == (undefined4 *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *puVar3;
      }
      puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x20,0x3bf);
      uVar2 = *puVar3;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_0041354c(unaff_EBP + -0x1c,uVar2,uVar1,*(undefined4 *)(unaff_EBP + -0x14));
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00402676();
      FUN_00402e8e(*(undefined4 *)(unaff_EBP + -0x1c));
      FUN_00402f41(unaff_EBP + -0x18);
      if (*(int *)(unaff_EBP + -0x18) != 0) {
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
      }
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    } while (*(int *)(unaff_EBP + -0x10) < *(int *)(unaff_EBP + 0xc));
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


