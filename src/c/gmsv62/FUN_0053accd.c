/* FUN_0053accd - 0x0053accd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0053accd(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *_Dst;
  
  _Dst = (undefined4 *)(param_1 + 0x214);
  _memset(_Dst,0,0x188);
  puVar1 = (undefined4 *)(param_1 + 0x7d);
  iVar2 = 0x31;
  do {
    *_Dst = *puVar1;
    puVar1 = puVar1 + 1;
    _Dst = _Dst + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_0053ad5d();
  FUN_0053ac0d();
  FUN_0053ad40(0);
  FUN_0043f184(param_1 + 100);
  FUN_007c520a();
  FUN_00817f6e(0);
  return;
}


