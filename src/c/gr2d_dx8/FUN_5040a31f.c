/* FUN_5040a31f - 0x5040a31f in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 FUN_5040a31f(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_EBP;
  
  FUN_5042a430();
  puVar1 = *(undefined4 **)(unaff_EBP + 0xc);
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 0x80004003;
  }
  else {
    Ordinal_8(unaff_EBP + -0x1c);
    iVar4 = *(int *)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*(int *)(iVar4 + 0x40) == 0) {
      FUN_5042a358(0x80004003);
    }
    piVar2 = *(int **)(iVar4 + 0x40);
    (**(code **)(*piVar2 + 0x60))(piVar2,unaff_EBP + -0x1c);
    if (*(short *)(unaff_EBP + -0x1c) == 0xd) {
      uVar3 = (**(code **)**(undefined4 **)(unaff_EBP + -0x14))
                        (*(undefined4 **)(unaff_EBP + -0x14),&DAT_50435298,puVar1);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar4 = FUN_5040278b((short *)(unaff_EBP + -0x1c));
      if (iVar4 < 0) {
        FUN_5042a358(iVar4);
      }
    }
    else {
      *puVar1 = 0;
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar4 = FUN_5040278b((short *)(unaff_EBP + -0x1c));
      if (iVar4 < 0) {
        FUN_5042a358(iVar4);
      }
      uVar3 = 0;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


