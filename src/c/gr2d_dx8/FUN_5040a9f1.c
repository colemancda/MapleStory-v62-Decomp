/* FUN_5040a9f1 - 0x5040a9f1 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 FUN_5040a9f1(void)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_EBP;
  undefined8 uVar5;
  
  FUN_5042a430();
  puVar2 = *(ushort **)(unaff_EBP + 8);
  uVar1 = *puVar2;
  if (uVar1 == 0) {
LAB_5040ab33:
    **(undefined4 **)(unaff_EBP + 0xc) = 0;
  }
  else {
    if (uVar1 == 6) {
      **(undefined4 **)(unaff_EBP + 0xc) = 1;
      iVar3 = *(int *)(puVar2 + 6);
LAB_5040ab18:
      uVar5 = __allshr(0x20,iVar3);
      uVar4 = (undefined4)uVar5;
      goto LAB_5040ab3a;
    }
    if (uVar1 == 10) goto LAB_5040ab33;
    if (uVar1 != 0x4006) {
      if (uVar1 == 0x400c) {
        Ordinal_8(unaff_EBP + -0x1c);
        *(undefined4 *)(unaff_EBP + -4) = 0;
        iVar3 = FUN_5040c1b1((short *)(unaff_EBP + -0x1c),(short *)puVar2);
        if (iVar3 < 0) {
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          goto LAB_5040aaaf;
        }
        uVar4 = FUN_5040a9f1();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar3 = FUN_5040278b((short *)(unaff_EBP + -0x1c));
      }
      else {
        **(undefined4 **)(unaff_EBP + 0xc) = 2;
        Ordinal_8(unaff_EBP + -0x1c);
        *(undefined4 *)(unaff_EBP + -4) = 1;
        iVar3 = FUN_50405194((ushort *)(unaff_EBP + -0x1c),puVar2,0,3);
        if (iVar3 < 0) {
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
LAB_5040aaaf:
          iVar3 = FUN_5040278b((short *)(unaff_EBP + -0x1c));
          if (iVar3 < 0) {
            FUN_5042a358(iVar3);
          }
          FUN_50405e1f((void *)(unaff_EBP + -0x2c),0x80070057,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
          _CxxThrowException((void *)(unaff_EBP + -0x2c),(ThrowInfo *)&DAT_50430d08);
        }
        uVar4 = *(undefined4 *)(unaff_EBP + -0x14);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar3 = FUN_5040278b((short *)(unaff_EBP + -0x1c));
      }
      if (iVar3 < 0) {
        FUN_5042a358(iVar3);
      }
      goto LAB_5040ab3a;
    }
    **(undefined4 **)(unaff_EBP + 0xc) = 1;
    if (*(int *)(puVar2 + 4) != 0) {
      iVar3 = *(int *)(*(int *)(puVar2 + 4) + 4);
      goto LAB_5040ab18;
    }
  }
  uVar4 = 0;
LAB_5040ab3a:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


