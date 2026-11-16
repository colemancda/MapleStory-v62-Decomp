/* FUN_5000d476 - 0x5000d476 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 FUN_5000d476(void)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_EBP;
  
  FUN_50012d80();
  puVar2 = *(ushort **)(unaff_EBP + 8);
  uVar1 = *puVar2;
  if (uVar1 == 3) {
    uVar4 = *(undefined4 *)(puVar2 + 4);
  }
  else if ((uVar1 == 0) || (uVar1 == 10)) {
    uVar4 = *(undefined4 *)(unaff_EBP + 0xc);
  }
  else {
    Ordinal_8(unaff_EBP + -0x1c);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar3 = FUN_5000cfbb((ushort *)(unaff_EBP + -0x1c),puVar2,0,3);
    if (iVar3 < 0) {
      FUN_50007006((void *)(unaff_EBP + -0x2c),iVar3,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((void *)(unaff_EBP + -0x2c),(ThrowInfo *)&DAT_50015eb8);
    }
    uVar4 = *(undefined4 *)(unaff_EBP + -0x14);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar3 = FUN_5000630c((short *)(unaff_EBP + -0x1c));
    if (iVar3 < 0) {
      FUN_50012c97(iVar3);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


