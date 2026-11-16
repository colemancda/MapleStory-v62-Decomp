/* FUN_50c0aae0 - 0x50c0aae0 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c0aae0(void)

{
  int *piVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_50c10270();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar2 = PcSerializeObject();
  if (iVar2 < 0) {
    FUN_50c061b4((void *)(unaff_EBP + -0x20),iVar2,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException((void *)(unaff_EBP + -0x20),(ThrowInfo *)&DAT_50c14eb0);
  }
  iVar2 = *(int *)(unaff_EBP + -0x10);
  if (iVar2 == 0) {
    iVar2 = FUN_50c08269((short *)(extraout_ECX + 8));
    if (iVar2 < 0) {
      FUN_50c101c4(iVar2);
    }
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(int *)(extraout_ECX + 0x10) = iVar2;
    *(undefined2 *)(extraout_ECX + 8) = 0xd;
  }
  piVar1 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


