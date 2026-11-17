/* FUN_00648ce0 - 0x00648ce0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00648ce0(void)

{
  uint uVar1;
  uint uVar2;
  int extraout_ECX;
  int unaff_EBP;
  int iVar3;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  
  FUN_00879bb8();
  uVar1 = *(uint *)(extraout_ECX + 0xe4);
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  if (-1 < (int)uVar1) {
    if (*(int *)(extraout_ECX + 0xcc) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(*(int *)(extraout_ECX + 0xcc) + -4);
    }
    if (((uVar1 < uVar2) && (*(int *)(extraout_ECX + 0xec) == 0)) &&
       (iVar3 = uVar1 * 0x40 + *(int *)(extraout_ECX + 0xcc),
       *(double *)(iVar3 + 0x20) != _DAT_008e8a80)) {
      iVar3 = *(int *)(iVar3 + 0x38);
      *(int *)(unaff_EBP + -0x24) = iVar3;
      if (iVar3 != 0) {
        uStack_40 = 0x648d57;
        InterlockedIncrement((LONG *)(iVar3 + 4));
      }
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iVar3 = FUN_0045e2eb();
      uStack_40 = 0;
      iStack_44 = 0;
      uStack_48 = 0;
      uStack_4c = 1000000;
      *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_4c;
      *(int *)(unaff_EBP + -0x14) = iVar3 / 1000000;
      FUN_00679d22(&uStack_4c,0x34a);
      iVar3 = FUN_007db791();
      if (iVar3 == 6) {
        uStack_40 = 0x648da9;
        FUN_00455c59();
        if (*(int *)(unaff_EBP + -0x1c) != 0) {
          uStack_40 = 0x648dba;
          FUN_0045e7c2();
        }
        if (*(int *)(unaff_EBP + -0x24) != 0) {
          uStack_40 = *(undefined4 *)(unaff_EBP + -0x14);
          iStack_44 = unaff_EBP + -0x20;
          uStack_48 = 0x648dce;
          iVar3 = FUN_00458c4f();
          *(bool *)(unaff_EBP + -0xd) = *(int *)(iVar3 + 4) != *(int *)(unaff_EBP + -0x24);
          if (*(int *)(unaff_EBP + -0x1c) != 0) {
            uStack_40 = 0x648de6;
            FUN_00449913();
            *(undefined4 *)(unaff_EBP + -0x1c) = 0;
          }
          if (*(char *)(unaff_EBP + -0xd) == '\0') {
            uStack_40 = 0;
            iStack_44 = 0x39;
            uStack_48 = 0x648dfa;
            FUN_0060142b();
            *(undefined1 *)(unaff_EBP + -4) = 1;
            uStack_40 = 0x648e08;
            FUN_00457cda();
            uStack_40 = 0x648e11;
            FUN_0045d247();
            uStack_40 = 0x648e20;
            FUN_004751b2();
            *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0xec) = 1;
            *(undefined1 *)(unaff_EBP + -4) = 0;
            FUN_0045ebca();
          }
        }
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        uStack_40 = 0x648e4a;
        FUN_00449913();
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


