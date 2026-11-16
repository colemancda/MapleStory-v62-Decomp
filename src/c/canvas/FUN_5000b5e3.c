/* FUN_5000b5e3 - 0x5000b5e3 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void FUN_5000b5e3(void)

{
  int *piVar1;
  ulonglong uVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int extraout_ECX;
  undefined4 *puVar7;
  int unaff_EBP;
  
  FUN_50012d80();
  puVar7 = (undefined4 *)(extraout_ECX + 0x20);
  *(undefined4 **)(unaff_EBP + -0x14) = puVar7;
  *(undefined4 **)(unaff_EBP + -0x18) = puVar7;
  FUN_500024f7();
  piVar4 = *(int **)(extraout_ECX + 0x30);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (piVar4 == (int *)0x0) {
    if (*(int *)(extraout_ECX + 0x34) == 0) {
      if ((*(int *)(unaff_EBP + 8) != 0) || (*(int *)(unaff_EBP + 0xc) != 0)) {
        FUN_50007006((void *)(unaff_EBP + -0x28),0x80070057,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
        _CxxThrowException((void *)(unaff_EBP + -0x28),(ThrowInfo *)&DAT_50015eb8);
      }
      if (*(int **)(unaff_EBP + 0x10) == (int *)0x0) {
        FUN_50007006((void *)(unaff_EBP + -0x28),0x80004003,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
        _CxxThrowException((void *)(unaff_EBP + -0x28),(ThrowInfo *)&DAT_50015eb8);
      }
      piVar4 = *(int **)(extraout_ECX + 0x28);
      piVar3 = FUN_5000d399(*(int **)(unaff_EBP + 0x10));
      if (piVar4 <= piVar3) {
        piVar3 = piVar4;
      }
      piVar4 = *(int **)(unaff_EBP + 0x10);
      piVar1 = *(int **)(extraout_ECX + 0x2c);
      *(int **)(extraout_ECX + 0x30) = piVar3;
      piVar4 = FUN_5000d3c0(piVar4);
      if (piVar1 <= piVar4) {
        piVar4 = piVar1;
      }
      uVar5 = *(uint *)(extraout_ECX + 0x30);
      *(int **)(extraout_ECX + 0x34) = piVar4;
      if ((uVar5 == 0) || (piVar4 == (int *)0x0)) {
        *(undefined4 *)(extraout_ECX + 0x34) = 0;
        *(undefined4 *)(extraout_ECX + 0x30) = 0;
        FUN_50007006((void *)(unaff_EBP + -0x28),0x80070057,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
        _CxxThrowException((void *)(unaff_EBP + -0x28),(ThrowInfo *)&DAT_50015eb8);
      }
      uVar5 = ((uVar5 - 1) + *(int *)(extraout_ECX + 0x28)) / uVar5;
      uVar6 = (uint)((int)piVar4 + *(int *)(extraout_ECX + 0x2c) + -1) / (uint)piVar4;
      *(uint *)(extraout_ECX + 0x38) = uVar5;
      *(uint *)(extraout_ECX + 0x3c) = uVar6;
      FUN_5000c706((void *)(extraout_ECX + 0x40),uVar6 * uVar5);
      piVar3 = FUN_5000d34b(*(int **)(unaff_EBP + 0x10));
      piVar4 = *(int **)(unaff_EBP + 0x10);
      *(int **)(extraout_ECX + 0x18) = piVar3;
      piVar4 = FUN_5000d372(piVar4);
      *(int **)(extraout_ECX + 0x1c) = piVar4;
LAB_5000b78d:
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
                 (*(int *)(extraout_ECX + 0x40) +
                 ((*(uint *)(unaff_EBP + 0xc) / *(uint *)(extraout_ECX + 0x34)) *
                  *(int *)(extraout_ECX + 0x38) +
                 *(uint *)(unaff_EBP + 8) / *(uint *)(extraout_ECX + 0x30)) * 4),
                 *(IBinding **)(unaff_EBP + 0x10));
      piVar4 = puVar7 + 1;
      *piVar4 = *piVar4 + -1;
      if (*piVar4 == 0) {
        *puVar7 = 0;
      }
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
  }
  else if ((((*(uint *)(extraout_ECX + 0x34) != 0) &&
            (*(int *)(unaff_EBP + 8) < *(int *)(extraout_ECX + 0x28))) &&
           (*(int *)(unaff_EBP + 0xc) < *(int *)(extraout_ECX + 0x2c))) &&
          ((uVar2 = (ulonglong)*(uint *)(unaff_EBP + 8) % ZEXT48(piVar4), (int)uVar2 == 0 &&
           ((int)((uVar2 << 0x20 | (ulonglong)*(uint *)(unaff_EBP + 0xc)) %
                 (ulonglong)*(uint *)(extraout_ECX + 0x34)) == 0)))) {
    piVar3 = (int *)(*(int *)(extraout_ECX + 0x28) - *(int *)(unaff_EBP + 8));
    if (piVar3 < piVar4) {
      piVar4 = piVar3;
    }
    piVar3 = FUN_5000d399(*(int **)(unaff_EBP + 0x10));
    if (piVar4 <= piVar3) {
      piVar4 = (int *)(*(int *)(extraout_ECX + 0x2c) - *(int *)(unaff_EBP + 0xc));
      if (*(int **)(extraout_ECX + 0x34) <= piVar4) {
        piVar4 = *(int **)(extraout_ECX + 0x34);
      }
      piVar3 = FUN_5000d3c0(*(int **)(unaff_EBP + 0x10));
      if (piVar4 <= piVar3) {
        puVar7 = *(undefined4 **)(unaff_EBP + -0x14);
        goto LAB_5000b78d;
      }
    }
    FUN_50007006((void *)(unaff_EBP + -0x28),0x80070057,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException((void *)(unaff_EBP + -0x28),(ThrowInfo *)&DAT_50015eb8);
  }
  FUN_50007006((void *)(unaff_EBP + -0x28),0x80070057,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)(unaff_EBP + -0x28),(ThrowInfo *)&DAT_50015eb8);
}


