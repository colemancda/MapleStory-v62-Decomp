/* FUN_504027b5 - 0x504027b5 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


int FUN_504027b5(void)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  int unaff_EBP;
  
  FUN_5042a430();
  puVar2 = *(ushort **)(unaff_EBP + 0xc);
  uVar1 = *puVar2;
  if ((uVar1 == 0) || (uVar1 == 10)) {
    **(undefined4 **)(unaff_EBP + 8) = *(undefined4 *)(unaff_EBP + 0x10);
  }
  else {
    Ordinal_8(unaff_EBP + -0x1c);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar3 = FUN_50405194((ushort *)(unaff_EBP + -0x1c),puVar2,0,3);
    if (iVar3 < 0) {
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar4 = FUN_5040278b((short *)(unaff_EBP + -0x1c));
      if (iVar4 < 0) {
        FUN_5042a358(iVar4);
      }
      goto LAB_50402841;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    **(undefined4 **)(unaff_EBP + 8) = *(undefined4 *)(unaff_EBP + -0x14);
    iVar3 = FUN_5040278b((short *)(unaff_EBP + -0x1c));
    if (iVar3 < 0) {
      FUN_5042a358(iVar3);
    }
  }
  iVar3 = 0;
LAB_50402841:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar3;
}


