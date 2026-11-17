/* ptr_006e4a29 - 0x006e4a29 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_006e4a29(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_14;
  int iStack_10;
  
  FUN_00879bb8();
  iVar1 = *(int *)(unaff_EBP + 8);
  if (iVar1 == 2000) {
    iStack_10 = unaff_EBP + -0x10;
    uStack_14 = 0x6e4a9f;
    FUN_0048b998();
    uStack_14 = 0x6e4aa6;
    uVar2 = FUN_0045b90e();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(undefined4 **)(unaff_EBP + -0x14) = &uStack_14;
    FUN_006ea77e(&uStack_14,uVar2);
    FUN_006ea600();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_10 = 0x6e4acd;
    FUN_00414ebb();
  }
  else {
    if (iVar1 == 0x7d1) {
      iStack_10 = *(int *)(extraout_ECX + 0x578) + -1;
    }
    else {
      if (iVar1 != 0x7d2) {
        if (iVar1 == 0x7d3) {
          iStack_10 = *(int *)(extraout_ECX + 0x57c) + -1;
        }
        else {
          if (iVar1 != 0x7d4) goto LAB_006e4acd;
          iStack_10 = *(int *)(extraout_ECX + 0x57c) + 1;
        }
        uStack_14 = 0x6e4a5d;
        FUN_006e955f();
        iStack_10 = 0x6e4a64;
        FUN_006e6684();
        goto LAB_006e4acd;
      }
      iStack_10 = *(int *)(extraout_ECX + 0x578) + 1;
    }
    uStack_14 = 0x6e4a7e;
    FUN_006e952f();
    iStack_10 = 0x6e4a85;
    FUN_006ea5e4();
  }
LAB_006e4acd:
  iStack_10 = *(undefined4 *)(unaff_EBP + 8);
  uStack_14 = 0x6e4ad7;
  FUN_0078a282();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


