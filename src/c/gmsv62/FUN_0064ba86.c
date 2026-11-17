/* FUN_0064ba86 - 0x0064ba86 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0064ba86(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *_Dst;
  int unaff_EBP;
  undefined4 uVar3;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = _Dst;
  *_Dst = &PTR_LAB_008e84a0;
  _memset(_Dst,0,0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0087b2f0(_Dst + 3,4,0xf,FUN_0044cba3,FUN_00403621);
  piVar1 = *(int **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *_Dst = &PTR_FUN_008ed3a4;
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  if (iVar2 < 0x4dd5cc) {
    if (iVar2 != 0x4dd5cb) {
      if (((iVar2 != 0x2f514d) && (iVar2 != 0x2f9f6e)) && (iVar2 != 0x31260d)) {
        if (iVar2 == 0x40413c) {
          FUN_0064c13f(piVar1,*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x18),
                       *(undefined4 *)(unaff_EBP + 0x1c));
          goto LAB_0064bb5f;
        }
LAB_0064bb2f:
        FUN_0064bbca(piVar1,*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x10),
                     *(undefined4 *)(unaff_EBP + 0x14),*(undefined4 *)(unaff_EBP + 0x18),
                     *(undefined4 *)(unaff_EBP + 0x20));
        goto LAB_0064bb5f;
      }
      goto LAB_0064bb54;
    }
    uVar3 = 2;
  }
  else {
    if (iVar2 != 0x4dd5cc) {
      if (iVar2 == 0x4e23ef) {
        FUN_0064c1e8(piVar1,1);
        goto LAB_0064bb5f;
      }
      if (iVar2 != 0x4f837a) goto LAB_0064bb2f;
    }
LAB_0064bb54:
    uVar3 = *(undefined4 *)(unaff_EBP + 0x18);
  }
  FUN_0064c109(piVar1,uVar3);
LAB_0064bb5f:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return _Dst;
}


