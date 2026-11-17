/* ptr_006bcaf5 - 0x006bcaf5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall ptr_006bcaf5(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  switch(param_2) {
  case 2000:
    uVar1 = 0;
    goto LAB_006bcb48;
  case 0x7d1:
    uVar1 = 1;
LAB_006bcb48:
    uVar2 = 0;
LAB_006bcb4a:
    FUN_006bcd2d(uVar2,uVar1);
    break;
  case 0x7d2:
    FUN_006bd022();
    break;
  case 0x7d3:
    uVar1 = 0;
    uVar2 = 1;
    goto LAB_006bcb4a;
  case 0x7d4:
    uVar2 = 0;
    goto LAB_006bcb32;
  case 0x7d5:
    uVar2 = 0;
    uVar1 = 1;
    goto LAB_006bcb34;
  case 0x7d6:
    uVar2 = 1;
LAB_006bcb32:
    uVar1 = 0;
LAB_006bcb34:
    FUN_006bce3f(uVar1,uVar2);
    break;
  case 0x7d7:
    FUN_006bd011();
    break;
  case 0x7d8:
    FUN_006bd0db();
    break;
  case 0x7d9:
    uVar2 = 0;
    goto LAB_006bcb6a;
  case 0x7da:
    uVar2 = 1;
    goto LAB_006bcb6a;
  case 0x7db:
    uVar2 = 2;
    goto LAB_006bcb6a;
  case 0x7dc:
    uVar2 = 3;
LAB_006bcb6a:
    FUN_006bd1ed(uVar2);
    break;
  case 0x7dd:
    FUN_008324e4(*(undefined4 *)(param_1 + 0x554));
    break;
  case 0x7de:
    uVar2 = 0x7de;
    goto LAB_006bcb92;
  case 0x7df:
    uVar2 = 0x7df;
LAB_006bcb92:
    FUN_006bcbe6(uVar2);
  }
  FUN_0078a282(param_2);
  return;
}


