/* FUN_007d3546 - 0x007d3546 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007d3546(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_EBP;
  int iVar5;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x18,0x3bc);
  uVar1 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00434e21(unaff_EBP + -0x10,uVar1,*(undefined4 *)(unaff_EBP + 0xc));
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  if (*(int *)(unaff_EBP + 0x10) == 0) {
    FUN_00414f8b(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
  }
  else {
    uVar1 = *(undefined4 *)(unaff_EBP + 8);
    FUN_00414f29();
    iVar3 = *(int *)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    if (iVar3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iVar3 + -4);
    }
    iVar5 = iVar5 + -1;
    if (-1 < iVar5) {
      while( true ) {
        *(undefined1 *)(unaff_EBP + 10) = *(undefined1 *)(iVar5 + iVar3);
        *(undefined4 *)(unaff_EBP + 0x10) = 0;
        *(undefined1 *)(unaff_EBP + 0xb) = 0;
        FUN_00414edd(unaff_EBP + 10,0xffffffff);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        uVar4 = FUN_0045e02d(unaff_EBP + -0x1c,uVar1);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        FUN_00414f8b(uVar4);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00414ebb();
        if ((0 < iVar5) && (*(int *)(unaff_EBP + -0x18) % 3 == 2)) {
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
          *(undefined1 *)(unaff_EBP + 0xe) = 0x2c;
          *(undefined1 *)(unaff_EBP + 0xf) = 0;
          FUN_00414edd(unaff_EBP + 0xe,0xffffffff);
          *(undefined1 *)(unaff_EBP + -4) = 4;
          uVar4 = FUN_0045e02d(unaff_EBP + -0x20,uVar1);
          *(undefined1 *)(unaff_EBP + -4) = 5;
          FUN_00414f8b(uVar4);
          *(undefined1 *)(unaff_EBP + -4) = 4;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 0;
          FUN_00414ebb();
        }
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
        iVar5 = iVar5 + -1;
        if (iVar5 < 0) break;
        iVar3 = *(int *)(unaff_EBP + -0x10);
      }
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


