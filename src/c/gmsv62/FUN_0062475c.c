/* FUN_0062475c - 0x0062475c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0062475c(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *_Dst;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x1c) = _Dst;
  *_Dst = &PTR_LAB_008e84a0;
  _memset(_Dst,0,0xc);
  *(undefined2 *)(_Dst + 3) = *(undefined2 *)(unaff_EBP + 8);
  _Dst[4] = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  _Dst[6] = 0;
  _Dst[7] = 0;
  _Dst[8] = 0;
  _Dst[9] = 0;
  _Dst[10] = 0;
  *_Dst = &PTR_FUN_008ed188;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar3 = FUN_00455c59(unaff_EBP + -0x18);
  uVar1 = *(undefined4 *)(iVar3 + 4);
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_0045e7c2(0);
  }
  uVar4 = FUN_0083cbf6();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
  *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + 8);
  iVar3 = FUN_005ee726(unaff_EBP + -0x10);
  if (iVar3 == 0) {
    iVar3 = FUN_00627ca7(unaff_EBP + 8);
    piVar2 = DAT_00978358;
    if (iVar3 != 0) {
      *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(DAT_00978368 + 0x3308);
      (**(code **)(*piVar2 + 4))();
      uVar4 = FUN_004bf0d4();
      iVar3 = FUN_0062d669(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),uVar1,
                           uVar4,*(undefined4 *)(unaff_EBP + -0x10),
                           *(undefined4 *)(unaff_EBP + -0x14));
      if (iVar3 == 0) {
        _Dst[5] = 2;
        goto LAB_0062485b;
      }
    }
    _Dst[5] = 0;
  }
  else {
    _Dst[5] = 1;
  }
LAB_0062485b:
  FUN_00624a78();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return _Dst;
}


