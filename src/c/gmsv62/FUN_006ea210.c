/* FUN_006ea210 - 0x006ea210 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006ea210(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_EBP;
  bool bVar3;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined ***)(unaff_EBP + -0x20) = &PTR_FUN_008e862c;
  bVar3 = DAT_00973a90 != 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (bVar3) {
    uVar1 = *(undefined4 *)(unaff_EBP + 0x10);
    uVar2 = *(undefined4 *)(unaff_EBP + 8);
    if (0 < *(int *)(unaff_EBP + 0xc)) {
      FUN_0040a66d(uVar2,1,unaff_EBP + -0x20);
      FUN_00412673(unaff_EBP + -0x20);
      FUN_0041389d();
      FUN_0040a66d(uVar2,3,uVar1);
      FUN_00412673(unaff_EBP + -0x20);
      FUN_0041389d();
    }
    if (1 < *(int *)(unaff_EBP + 0xc)) {
      FUN_0040a66d(uVar2,0,unaff_EBP + -0x20);
      FUN_00412673(unaff_EBP + -0x20);
      FUN_0041389d();
      FUN_0040a66d(uVar2,2,uVar1);
      FUN_00412673(unaff_EBP + -0x20);
      FUN_0041389d();
    }
    if (2 < *(int *)(unaff_EBP + 0xc)) {
      FUN_0040a66d(uVar2,0xc,unaff_EBP + -0x20);
      FUN_00412673(unaff_EBP + -0x20);
      FUN_0041389d();
      FUN_0040a66d(uVar2,0xd,uVar1);
      FUN_00412673(unaff_EBP + -0x20);
      FUN_0041389d();
      FUN_0040a66d(uVar2,0xe,unaff_EBP + -0x20);
      FUN_00412673(unaff_EBP + -0x20);
      FUN_0041389d();
      FUN_0040a66d(uVar2,0xf,uVar1);
      FUN_00412673(unaff_EBP + -0x20);
      FUN_0041389d();
      FUN_0040a66d(uVar2,0x10,unaff_EBP + -0x20);
      FUN_00412673(unaff_EBP + -0x20);
      FUN_0041389d();
      FUN_0040a66d(uVar2,0x11,uVar1);
      FUN_00412673(unaff_EBP + -0x20);
      FUN_0041389d();
      FUN_0040a66d(uVar2,0x12,unaff_EBP + -0x20);
      FUN_00412673(unaff_EBP + -0x20);
      FUN_0041389d();
      FUN_0040a66d(uVar2,0x13,uVar1);
      FUN_00412673(unaff_EBP + -0x20);
      FUN_0041389d();
      FUN_0040a66d(uVar2,0x14,uVar1);
      FUN_00412673(unaff_EBP + -0x20);
      FUN_0041389d();
      FUN_0040a66d(uVar2,0x15,unaff_EBP + -0x20);
      FUN_00412673(unaff_EBP + -0x20);
      FUN_0041389d();
      FUN_0040a66d(uVar2,0x16,uVar1);
      FUN_00412673(unaff_EBP + -0x20);
      FUN_0041389d();
      FUN_0040a66d(uVar2,0x17,unaff_EBP + -0x20);
      FUN_00412673(unaff_EBP + -0x20);
      FUN_0041389d();
      FUN_0040a66d(uVar2,0x18,uVar1);
      FUN_00412673(unaff_EBP + -0x20);
      FUN_0041389d();
      FUN_0040a66d(uVar2,0x19,unaff_EBP + -0x20);
      FUN_00412673(unaff_EBP + -0x20);
      FUN_0041389d();
    }
    if (3 < *(int *)(unaff_EBP + 0xc)) {
      FUN_0040a66d(uVar2,6,unaff_EBP + -0x20);
      FUN_00412673(unaff_EBP + -0x20);
      FUN_0041389d();
      FUN_0040a66d(uVar2,7,unaff_EBP + -0x20);
      FUN_00412673(unaff_EBP + -0x20);
      FUN_0041389d();
      FUN_0040a66d(uVar2,8,unaff_EBP + -0x20);
      FUN_00412673(unaff_EBP + -0x20);
      FUN_0041389d();
    }
    if (4 < *(int *)(unaff_EBP + 0xc)) {
      FUN_0040a66d(uVar2,9,unaff_EBP + -0x20);
      FUN_00412673(unaff_EBP + -0x20);
      FUN_0041389d();
      FUN_0040a66d(uVar2,10,unaff_EBP + -0x20);
      FUN_00412673(unaff_EBP + -0x20);
      FUN_0041389d();
      FUN_0040a66d(uVar2,0xb,unaff_EBP + -0x20);
      FUN_00412673(unaff_EBP + -0x20);
      FUN_0041389d();
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined ***)(unaff_EBP + -0x20) = &PTR_FUN_008e862c;
  FUN_0041389d();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


