/* FUN_0048f7ae - 0x0048f7ae in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0048f7ae(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if ((*(byte *)(unaff_EBP + 0xf) & 0x80) == 0) {
    iVar1 = (*DAT_0097b704)();
    if (*(uint *)(extraout_ECX + 0xa4) <= (uint)(iVar1 - _DAT_00964bf0)) {
      uVar2 = (*DAT_0097b704)();
      *(uint *)(extraout_ECX + 0xa4) = uVar2;
      uVar2 = *(uint *)(unaff_EBP + 8);
      iVar1 = -1;
      if ((uVar2 < 0x31) || (0x39 < uVar2)) {
        if (uVar2 != 0x24) {
          if (uVar2 != 0xc0) {
            if (uVar2 != 9) goto LAB_0048f93f;
            iVar3 = *(int *)(*(int *)(extraout_ECX + 0x68) + 0x38);
            *(int *)(unaff_EBP + 0xc) = *(int *)(*(int *)(extraout_ECX + 0xa0) + 0x504) + 1 + iVar3;
            iVar4 = FUN_005265f8(0xa0);
            if (iVar4 == 0) {
              iVar4 = FUN_005265f8(0xa1);
              if (iVar4 != 0) goto LAB_0048f8af;
            }
            else {
LAB_0048f8af:
              *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + -2;
            }
            if (iVar3 == 0) {
              iVar3 = 0;
            }
            else {
              iVar3 = *(int *)(unaff_EBP + 0xc) % iVar3;
            }
            if (iVar3 == *(int *)(*(int *)(extraout_ECX + 0xa0) + 0x504)) goto LAB_0048f93f;
            FUN_004586c2(iVar3);
            goto LAB_0048f8d5;
          }
          if (*(int *)(extraout_ECX + 0x9c) == 9) goto LAB_0048f93f;
          iVar1 = 1;
          iVar3 = FUN_005265f8(0xa0);
          if (iVar3 == 0) {
            iVar3 = FUN_005265f8(0xa1);
            if (iVar3 != 0) goto LAB_0048f84d;
          }
          else {
LAB_0048f84d:
            iVar1 = -1;
          }
          iVar1 = (iVar1 + 7 + *(int *)(extraout_ECX + 0x9c)) % 8 + 1;
          goto LAB_0048f8d5;
        }
        iVar1 = 1;
      }
      else {
        iVar1 = uVar2 - 0x30;
LAB_0048f8d5:
        if (iVar1 < 1) goto LAB_0048f93f;
      }
      if (*(int *)(*(int *)(extraout_ECX + 0xa0) + 0x500) != iVar1) {
        puVar5 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x4d3);
        uVar6 = *puVar5;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        FUN_007d3cdd(uVar6);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00402676();
        FUN_00458692(iVar1);
        FUN_008161f1(0);
        uVar6 = 1;
        goto LAB_0048f941;
      }
    }
  }
  else {
    iVar1 = (*DAT_0097b704)();
    *(int *)(extraout_ECX + 0xa4) = (iVar1 - _DAT_00964bf0) + -1;
  }
LAB_0048f93f:
  uVar6 = 0;
LAB_0048f941:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar6;
}


