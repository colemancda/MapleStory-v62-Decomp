/* FUN_00720134 - 0x00720134 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00720134(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  undefined4 *extraout_ECX_00;
  int unaff_EBP;
  undefined4 *puStack_3c;
  int iStack_38;
  code *pcStack_34;
  
  FUN_00879bb8();
  pcStack_34 = (code *)0x0;
  iStack_38 = 1;
  puStack_3c = (undefined4 *)0x6;
  *(undefined4 **)(unaff_EBP + -0x1c) = extraout_ECX;
  FUN_00789e42(3,3,0x9b);
  DAT_0097be0c = -(uint)(extraout_ECX + 0x15e != (undefined4 *)0x0) & (uint)extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x15e] = 0;
  extraout_ECX[0x160] = 0;
  extraout_ECX[0x162] = 0;
  pcStack_34 = ptr_0045e147;
  iStack_38 = 4;
  puStack_3c = (undefined4 *)0x8;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0087b2f0(extraout_ECX + 0x163);
  extraout_ECX[0x16c] = 0;
  extraout_ECX[0x16e] = 0;
  extraout_ECX[0x16f] = 0;
  extraout_ECX[0x170] = 0;
  pcStack_34 = (code *)&LAB_00450362;
  iStack_38 = 2;
  puStack_3c = (undefined4 *)0x4;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_0087b2f0(extraout_ECX + 0x171);
  extraout_ECX[0x173] = 0;
  extraout_ECX[0x174] = 0;
  extraout_ECX[0x175] = 0;
  extraout_ECX[0x176] = 0;
  extraout_ECX[0x179] = 0;
  extraout_ECX[0x17a] = 0;
  extraout_ECX[0x17b] = 0;
  extraout_ECX[0x17c] = 0;
  extraout_ECX[0x17e] = 0;
  pcStack_34 = (code *)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  *extraout_ECX = &PTR_FUN_008f0d48;
  extraout_ECX[1] = &PTR_FUN_008f0cfc;
  extraout_ECX[2] = &PTR_FUN_008f0cf8;
  iStack_38 = 0x720236;
  puVar1 = (undefined4 *)FUN_007d4a9a();
  pcStack_34 = (code *)0x720241;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x174),
             (IBinding *)*puVar1);
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    pcStack_34 = (code *)0x72024e;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  pcStack_34 = (code *)(unaff_EBP + -0x10);
  iStack_38 = 0x720263;
  puVar1 = (undefined4 *)FUN_00679d86();
  iStack_38 = *puVar1;
  pcStack_34 = (code *)(extraout_ECX + 0x175);
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  puStack_3c = (undefined4 *)0x720277;
  FUN_004506a3();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_00402676();
  pcStack_34 = (code *)0x720290;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  pcStack_34 = (code *)(unaff_EBP + -0x2c);
  puVar1 = &DAT_00980690;
  iStack_38 = 0x72029e;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    pcStack_34 = (code *)0x7202aa;
    FUN_00878dfb();
    puVar1 = extraout_ECX_00;
  }
  pcStack_34 = (code *)0xffffffff;
  iStack_38 = 0xb;
  *(undefined4 ***)(unaff_EBP + -0x10) = &puStack_3c;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  puStack_3c = puVar1;
  FUN_00679e4e(&puStack_3c,0xc);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_0044974c();
  FUN_004503f9();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  pcStack_34 = (code *)0x7202e9;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    pcStack_34 = (code *)0x7202f4;
    FUN_00878dfb();
  }
  pcStack_34 = (code *)(unaff_EBP + -0x10);
  iStack_38 = 0x7202ff;
  puVar1 = (undefined4 *)FUN_007d4a9a();
  pcStack_34 = (code *)0x72030e;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x176),
             (IBinding *)*puVar1);
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    pcStack_34 = (code *)0x72031b;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  extraout_ECX[0x178] = *(undefined4 *)(unaff_EBP + 8);
  pcStack_34 = (code *)(unaff_EBP + -0x14);
  iStack_38 = unaff_EBP + -0x18;
  puStack_3c = (undefined4 *)extraout_ECX[0x155];
  FUN_0047c974();
  pcStack_34 = (code *)0x0;
  iStack_38 = 1;
  puStack_3c = (undefined4 *)0xa;
  FUN_0081420c(*(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x14),0xaf,0x121);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


