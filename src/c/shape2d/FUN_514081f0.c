/* FUN_514081f0 - 0x514081f0 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


int FUN_514081f0(void)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  int unaff_EBP;
  
  FUN_5140ad20();
  puVar2 = *(ushort **)(unaff_EBP + 0xc);
  uVar1 = *puVar2;
  if ((uVar1 != 0) && (uVar1 != 10)) {
    if (uVar1 == 3) {
      **(undefined4 **)(unaff_EBP + 8) = *(undefined4 *)(puVar2 + 4);
    }
    else {
      Ordinal_8(unaff_EBP + -0x1c);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iVar4 = FUN_51405842((ushort *)(unaff_EBP + -0x1c),puVar2,0,3);
      if (iVar4 < 0) {
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar3 = FUN_51405818((short *)(unaff_EBP + -0x1c));
        if (iVar3 < 0) {
          FUN_5140ac47(iVar3);
        }
        goto LAB_51408282;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      **(undefined4 **)(unaff_EBP + 8) = *(undefined4 *)(unaff_EBP + -0x14);
      iVar4 = FUN_51405818((short *)(unaff_EBP + -0x1c));
      if (iVar4 < 0) {
        FUN_5140ac47(iVar4);
      }
    }
  }
  iVar4 = 0;
LAB_51408282:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar4;
}


