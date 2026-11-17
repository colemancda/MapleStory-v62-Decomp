/* FUN_005681eb - 0x005681eb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005681eb(void)

{
  char cVar1;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar2;
  int local_10;
  
  FUN_00879bb8();
  local_10 = unaff_EBP + -0x10;
  *(undefined4 *)(extraout_ECX + 0x144) = 0;
  FUN_0045cdbc();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  local_10 = 0x568217;
  cVar1 = FUN_0042452b();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  local_10 = 0;
  if (cVar1 < '\x01') {
    if (cVar1 == '\0') {
      FUN_0057a453(6);
      if (DAT_00979410 != 0) {
        *(int **)(unaff_EBP + 8) = &local_10;
        local_10 = 0;
        FUN_00414f8b(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_0056a75e();
        FUN_0056828f();
      }
      goto LAB_00568269;
    }
    uVar2 = 0x12;
  }
  else {
    uVar2 = 5;
  }
  FUN_0057a546(uVar2);
LAB_00568269:
  *(undefined1 *)(unaff_EBP + -4) = 0;
  local_10 = 0x568274;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_10 = 0x568280;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


