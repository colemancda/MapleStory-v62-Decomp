/* ptr_00887773 - 0x00887773 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ptr_00887773(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  
  uVar1 = DAT_00980902;
  if (DAT_009807a4 == 0) {
    FUN_0087aa78(DAT_009808d0);
    FUN_0087aa78(DAT_009808d4);
    FUN_0087aa78(DAT_009808d8);
    DAT_009808d0 = 0;
    DAT_009808d4 = 0;
    DAT_009808d8 = 0;
    pvVar5 = _malloc(2);
    *(void **)PTR_PTR_00973770 = pvVar5;
    if (*(int *)PTR_PTR_00973770 != 0) {
      FUN_0087b200(*(int *)PTR_PTR_00973770,&DAT_0096dffc);
      pvVar5 = _malloc(2);
      *(void **)(PTR_PTR_00973770 + 4) = pvVar5;
      if (*(undefined1 **)(PTR_PTR_00973770 + 4) != (undefined1 *)0x0) {
        **(undefined1 **)(PTR_PTR_00973770 + 4) = 0;
        pvVar5 = _malloc(2);
        *(void **)(PTR_PTR_00973770 + 8) = pvVar5;
        if (*(undefined1 **)(PTR_PTR_00973770 + 8) != (undefined1 *)0x0) {
          **(undefined1 **)(PTR_PTR_00973770 + 8) = 0;
          DAT_00972900 = **(undefined1 **)PTR_PTR_00973770;
          _DAT_00972904 = 1;
          return 0;
        }
      }
    }
  }
  else {
    iVar2 = FUN_0088b6fd(1,DAT_00980902,0xe,&DAT_009808d0);
    iVar3 = FUN_0088b6fd(1,uVar1,0xf,&DAT_009808d4);
    iVar4 = FUN_0088b6fd(1,uVar1,0x10,&DAT_009808d8);
    FUN_00887948(DAT_009808d8);
    if ((iVar2 == 0 && iVar3 == 0) && iVar4 == 0) {
      if (*(undefined **)PTR_PTR_00973770 != &DAT_00973738) {
        FUN_0087aa78(*(undefined **)PTR_PTR_00973770);
        FUN_0087aa78(*(undefined4 *)(PTR_PTR_00973770 + 4));
        FUN_0087aa78(*(undefined4 *)(PTR_PTR_00973770 + 8));
      }
      *(undefined4 *)PTR_PTR_00973770 = DAT_009808d0;
      *(undefined4 *)(PTR_PTR_00973770 + 4) = DAT_009808d4;
      *(undefined4 *)(PTR_PTR_00973770 + 8) = DAT_009808d8;
      DAT_00972900 = **(undefined1 **)PTR_PTR_00973770;
      _DAT_00972904 = 1;
      return 0;
    }
    FUN_0087aa78(DAT_009808d0);
    FUN_0087aa78(DAT_009808d4);
    FUN_0087aa78(DAT_009808d8);
    DAT_009808d0 = 0;
    DAT_009808d4 = 0;
    DAT_009808d8 = 0;
  }
  return 0xffffffff;
}


