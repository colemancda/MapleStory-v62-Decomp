/* FUN_005b211d - 0x005b211d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_005b211d(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  bVar1 = FUN_0042452b();
  uVar2 = FUN_0042452b();
  *(uint *)(param_1 + 0x744) = uVar2 & 0xff;
  FUN_0056a92f(uVar2 & 0xff,(int)&uStack_8 + 3);
  FUN_004245d2(*(undefined4 *)(param_1 + 0x200),*(int *)(param_1 + 0x744) << 2);
  *(uint *)(param_1 + 0x700) = (uint)((uint)bVar1 != *(uint *)(param_1 + 0xc0));
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(param_1 + 0x1e4),(IBinding *)0x0);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(param_1 + 0x1e8),(IBinding *)0x0);
  *(undefined4 *)(param_1 + 0x740) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x73c) = 0xffffffff;
  *(int *)(param_1 + 0x720) = *(int *)(param_1 + 0x744) * 200 + 0x2cec;
  *(undefined4 *)(param_1 + 0x710) = 0;
  FUN_005b965c();
  _memset((void *)(param_1 + 0x758),0,8);
  _memset((void *)(param_1 + 0x764),0,0x78);
  FUN_005b5b1b();
  FUN_008161f1(0);
  *(undefined4 *)(param_1 + 0x708) = 1;
  return;
}


