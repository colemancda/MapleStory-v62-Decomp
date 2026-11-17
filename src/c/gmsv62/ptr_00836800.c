/* ptr_00836800 - 0x00836800 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00836800(void)

{
  int iVar1;
  int unaff_EBX;
  int unaff_EBP;
  undefined1 auStack_14 [4];
  
  FUN_00434e38();
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  if (*(int *)(unaff_EBP + 8) != unaff_EBX) {
    FUN_00434e38();
  }
  *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
  FUN_0083e192();
  iVar1 = FUN_004becbc();
  if (iVar1 == 0) {
    *(undefined1 **)(unaff_EBP + 0xc) = auStack_14;
    FUN_00679d22(auStack_14,0x137);
    FUN_007db3ad();
  }
  else {
    FUN_007d1e08();
    FUN_00457d37();
    FUN_00839a29();
    FUN_00839a39();
    FUN_00679d86();
    *(undefined4 *)(unaff_EBP + -4) = 0x10b;
    FUN_00411641();
    FUN_007d4073();
    *(int *)(unaff_EBP + -4) = unaff_EBX;
    FUN_00402676();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00457cd2();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


