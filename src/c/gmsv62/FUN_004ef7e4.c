/* FUN_004ef7e4 - 0x004ef7e4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004ef7e4(void)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  cVar1 = FUN_0042452b();
  if (cVar1 != '\x03') {
    *(undefined4 *)(extraout_ECX + 0x1f8) = 0;
  }
  if (cVar1 == '\0') {
    iVar5 = FUN_0042459a();
    if (iVar5 != 0) {
      uVar6 = FUN_0087a90a(iVar5);
      FUN_00849a75(uVar6);
      if (0 < iVar5) goto LAB_004efa19;
    }
    FUN_00849b2c();
  }
  else if (cVar1 == '\x01') {
    uVar2 = FUN_0042452b();
    uVar3 = FUN_0042452b();
    uVar4 = FUN_0042452b();
    FUN_00479784(uVar2,uVar3,uVar4);
  }
  else if (cVar1 == '\x02') {
    iVar5 = *(int *)(extraout_ECX + 400);
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    *(undefined4 *)(unaff_EBP + -0x40) = 1;
    *(undefined4 *)(unaff_EBP + -0x34) = 0xe;
    *(undefined4 *)(unaff_EBP + -0x30) = 1;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0xff000040;
    *(undefined4 *)(unaff_EBP + -0x38) = 0xffffff20;
    if (iVar5 != 0) {
      FUN_00815de9();
    }
    iVar5 = FUN_004029b9(0xa8);
    *(int *)(unaff_EBP + 8) = iVar5;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar5 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_004e86a1();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_004f13ee(uVar6);
    FUN_0081420c(0x10f,0x1e,0x102,0x3a,0xc00616fc,1,unaff_EBP + -0x40,1);
    uVar6 = FUN_0042459a();
    FUN_0047976d(uVar6);
    FUN_004797eb();
  }
  else if (cVar1 == '\x03') {
    if ((*(int *)(extraout_ECX + 400) != 0) && (*(int *)(extraout_ECX + 0x1f8) == 1)) {
      FUN_00815de9();
      *(undefined4 *)(extraout_ECX + 0x1f8) = 0;
    }
    if (*(int *)(extraout_ECX + 400) == 0) {
      cVar1 = FUN_0042452b();
      if (cVar1 != '\0') {
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        *(undefined4 *)(unaff_EBP + -0x28) = 1;
        *(undefined4 *)(unaff_EBP + -0x1c) = 0xe;
        *(undefined4 *)(unaff_EBP + -0x18) = 1;
        *(undefined4 *)(unaff_EBP + -0x24) = 0xff000040;
        *(undefined4 *)(unaff_EBP + -0x20) = 0xffffff20;
        iVar5 = FUN_004029b9(0xa8);
        *(int *)(unaff_EBP + -0x10) = iVar5;
        *(undefined4 *)(unaff_EBP + -4) = 1;
        if (iVar5 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_004e86a1();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_004f13ee(uVar6);
        FUN_0081420c(0x10f,0x1e,0x102,0x3a,0xc00616fc,1,unaff_EBP + -0x28,1);
        uVar6 = FUN_0042459a();
        FUN_0047976d(uVar6);
        FUN_004797eb();
        *(undefined4 *)(extraout_ECX + 0x1f8) = 1;
      }
    }
  }
LAB_004efa19:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


