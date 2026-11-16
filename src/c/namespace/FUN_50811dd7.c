/* FUN_50811dd7 - 0x50811dd7 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_50811dd7(void)

{
  int *this;
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 extraout_ECX;
  int unaff_EBP;
  
  FUN_5080e090();
  piVar1 = *(int **)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -0x1c) = extraout_ECX;
  this = piVar1 + 1;
  FUN_5080db41(this,(int *)(unaff_EBP + -0x18));
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    do {
      iVar2 = (**(code **)(*piVar1 + 0x14))(unaff_EBP + 0x13,1);
      if (iVar2 != 1) {
        *(undefined4 *)(unaff_EBP + 0xc) = 0x26;
                    /* WARNING: Subroutine does not return */
        _CxxThrowException((void *)(unaff_EBP + 0xc),(ThrowInfo *)&DAT_5081ae30);
      }
      FUN_5080dcdd(unaff_EBP + -0x10,piVar1[7],(uint)(*(byte *)(unaff_EBP + 0x13) < 3));
      *(undefined4 *)(unaff_EBP + -4) = 0;
      puVar3 = FUN_508121ca();
      FUN_50803d5b(puVar3 + 5,(int *)(unaff_EBP + -0x10));
      puVar3[7] = *(byte *)(unaff_EBP + 0x13) & 1;
      FUN_5080db41(this,puVar3 + 3);
      FUN_5080db41(this,puVar3 + 6);
      FUN_50811ed8(piVar1,*(int *)(unaff_EBP + 8),*(int *)(*(int *)(unaff_EBP + -0x1c) + 0x60),
                   puVar3 + 4);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
        FUN_508040b6(*(int **)(unaff_EBP + -0x10));
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
      }
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
    } while (*(uint *)(unaff_EBP + -0x14) < *(uint *)(unaff_EBP + -0x18));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


