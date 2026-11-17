/* FUN_005f996a - 0x005f996a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_005f996a(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x200) != 0) {
    FUN_005fef07();
  }
  uVar1 = FUN_0042452b();
  uVar1 = (uint)((uVar1 & 0xff) != *(uint *)(param_1 + 0xc0));
  *(uint *)(param_1 + 0xa9c) = uVar1;
  *(uint *)(param_1 + 0xa94) = (uVar1 == 0) + 1;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(param_1 + 0x1d8),(IBinding *)0x0);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(param_1 + 0x1e0),(IBinding *)0x0);
  *(undefined4 *)(param_1 + 0xab8) = 30000;
  *(undefined4 *)(param_1 + 0xad8) = 0;
  *(undefined4 *)(param_1 + 0xaa8) = 0;
  FUN_005fd551();
  FUN_008161f1(0);
  *(undefined4 *)(param_1 + 0xaa0) = 1;
  return;
}


