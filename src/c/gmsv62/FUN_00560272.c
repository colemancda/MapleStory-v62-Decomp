/* FUN_00560272 - 0x00560272 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00560272(void)

{
  IBinding *pIVar1;
  int *piVar2;
  undefined4 *puVar3;
  size_t sVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int *extraout_ECX_03;
  int unaff_EBP;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *p_Var10;
  bool bVar11;
  undefined4 uVar12;
  int *piStack_18c;
  undefined *puStack_188;
  int *piStack_184;
  int *piStack_154;
  undefined *puStack_150;
  int *piStack_14c;
  undefined4 *puStack_148;
  int iStack_144;
  int iStack_140;
  int *piStack_13c;
  undefined *puStack_138;
  int *piStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  undefined4 *puStack_128;
  int *piStack_124;
  undefined *puStack_120;
  int *piStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  undefined4 *puStack_108;
  int *piStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  int iStack_f4;
  undefined1 *puStack_f0;
  undefined1 *puStack_ec;
  undefined1 *puStack_e8;
  int iStack_e4;
  int *piStack_e0;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -100) = extraout_ECX;
  iVar5 = *(int *)(unaff_EBP + 0x14);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (((iVar5 == 0x3ec) || (iVar5 == 0x3ea)) || (iVar5 == 0x3ed)) {
    uVar7 = 0;
    *(undefined4 *)(unaff_EBP + -0x40) = 1;
    if (*(int *)(unaff_EBP + 8) != 0) {
      piStack_e0 = (int *)0x560348;
      sVar4 = _strlen(*(char **)(unaff_EBP + 8));
      if (sVar4 != 0) goto LAB_005602bc;
    }
    piStack_e0 = (int *)0x56035d;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
               (*(int *)(unaff_EBP + -100) + 0x74),(IBinding *)0x0);
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
LAB_005602bc:
    if (((2 < *(int *)(unaff_EBP + 0x18)) && (iVar5 != 0x3e9)) &&
       ((iVar5 != 0x3ea && ((iVar5 != 0x3ec && (iVar5 != 0x3ed)))))) {
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (iVar5 == 1000) {
        piStack_e0 = (int *)(unaff_EBP + 0x28);
        iStack_e4 = 0x560317;
        puVar3 = (undefined4 *)FUN_00679d22();
        piStack_e0 = (int *)*puVar3;
        *(undefined1 *)(unaff_EBP + -4) = 3;
        iStack_e4 = unaff_EBP + -0x24;
        puStack_e8 = (undefined1 *)0x56032a;
        FUN_00434e21();
        iVar5 = *(int *)(unaff_EBP + 0x28);
        *(undefined1 *)(unaff_EBP + -4) = 2;
LAB_00560397:
        if (iVar5 != 0) {
          piStack_e0 = (int *)0x5603a4;
          FUN_00434e38();
        }
      }
      else if (iVar5 == 0x3eb) {
        piStack_e0 = (int *)(unaff_EBP + 0x28);
        iStack_e4 = 0x56037a;
        puVar3 = (undefined4 *)FUN_00679d22();
        piStack_e0 = (int *)*puVar3;
        *(undefined1 *)(unaff_EBP + -4) = 4;
        iStack_e4 = unaff_EBP + -0x24;
        puStack_e8 = (undefined1 *)0x56038d;
        FUN_00434e21();
        iVar5 = *(int *)(unaff_EBP + 0x28);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        goto LAB_00560397;
      }
      piStack_e0 = (int *)0x5603b3;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      piStack_e0 = (int *)0x5603c0;
      FUN_00403191();
      piStack_e0 = (int *)0x0;
      iStack_e4 = unaff_EBP + -0x38;
      puStack_e8 = (undefined1 *)(unaff_EBP + -0x74);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      puStack_ec = (undefined1 *)0x5603d6;
      puStack_f0 = (undefined1 *)FUN_00449713();
      *(undefined1 ***)(unaff_EBP + 0x28) = &puStack_ec;
      iStack_f4 = 0x5603e2;
      FUN_00448a17();
      puStack_f0 = (undefined1 *)(unaff_EBP + -0x58);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iStack_f4 = 0x5603ef;
      FUN_00405a1d();
      iStack_f4 = 0x5603f6;
      FUN_00402660();
      iStack_f4 = 0x5603fd;
      FUN_00404a02();
      *(undefined1 *)(unaff_EBP + -4) = 8;
      iStack_e4 = 0x560408;
      iVar5 = FUN_004032b4();
      *(int *)(unaff_EBP + 0x18) = iVar5;
      *(undefined4 *)(unaff_EBP + 0x20) = 0;
      if (iVar5 != 0) {
        piStack_e0 = (int *)0x56041e;
        iVar5 = FUN_00404b30();
        if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
          piStack_e0 = (int *)0x56042f;
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      piStack_e0 = (int *)0x56043c;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        piStack_e0 = (int *)0x560447;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      piStack_e0 = (int *)0x560454;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        piStack_e0 = (int *)0x56045f;
        FUN_00878dfb();
      }
      iVar5 = unaff_EBP + -0x38;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      piStack_e0 = (int *)0x56046c;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        piStack_e0 = (int *)0x560477;
        FUN_00878dfb();
        iVar5 = extraout_ECX_00;
      }
      piStack_e0 = (int *)0x0;
      puStack_ec = (undefined1 *)&iStack_e4;
      *(int **)(unaff_EBP + -0x44) = &iStack_e4;
      puStack_e8 = (undefined1 *)0x578;
      puStack_f0 = (undefined1 *)0x56048c;
      iStack_e4 = iVar5;
      FUN_00679e4e();
      puStack_e8 = (undefined1 *)(unaff_EBP + -0x84);
      *(undefined1 *)(unaff_EBP + -4) = 10;
      puStack_ec = (undefined1 *)0x56049f;
      FUN_0040263d();
      puStack_ec = (undefined1 *)0x5604a6;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      iStack_e4 = 0x5604b1;
      iVar5 = FUN_004032b4();
      *(int *)(unaff_EBP + 0x28) = iVar5;
      *(undefined4 *)(unaff_EBP + 0x30) = 0;
      if (iVar5 != 0) {
        piStack_e0 = (int *)0x5604c7;
        iVar5 = FUN_0041a581();
        if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
          piStack_e0 = (int *)0x5604d8;
          FUN_00878dfb();
        }
      }
      iVar5 = unaff_EBP + -0x84;
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      piStack_e0 = (int *)0x5604e8;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        piStack_e0 = (int *)0x5604f3;
        FUN_00878dfb();
        iVar5 = extraout_ECX_01;
      }
      piStack_e0 = (int *)0x0;
      puStack_ec = (undefined1 *)&iStack_e4;
      *(int **)(unaff_EBP + -0x44) = &iStack_e4;
      puStack_e8 = (undefined1 *)0x579;
      puStack_f0 = (undefined1 *)0x560508;
      iStack_e4 = iVar5;
      FUN_00679e4e();
      puStack_e8 = (undefined1 *)(unaff_EBP + -0x58);
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      puStack_ec = (undefined1 *)0x560518;
      FUN_0040263d();
      puStack_ec = (undefined1 *)0x56051f;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      iStack_e4 = 0x56052a;
      iVar5 = FUN_004032b4();
      *(int *)(unaff_EBP + 0x18) = iVar5;
      *(undefined4 *)(unaff_EBP + 0x24) = 0;
      if (iVar5 != 0) {
        piStack_e0 = (int *)0x560540;
        iVar5 = FUN_0041a581();
        if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
          piStack_e0 = (int *)0x560551;
          FUN_00878dfb();
        }
      }
      iVar5 = unaff_EBP + -0x58;
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      piStack_e0 = (int *)0x56055e;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        piStack_e0 = (int *)0x560569;
        FUN_00878dfb();
        iVar5 = extraout_ECX_02;
      }
      piStack_e0 = (int *)0x0;
      puStack_ec = (undefined1 *)&iStack_e4;
      *(int **)(unaff_EBP + -0x44) = &iStack_e4;
      puStack_e8 = (undefined1 *)0x577;
      puStack_f0 = (undefined1 *)0x56057e;
      iStack_e4 = iVar5;
      FUN_00679e4e();
      puStack_e8 = (undefined1 *)(unaff_EBP + -0x84);
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      puStack_ec = (undefined1 *)0x560591;
      FUN_0040263d();
      puStack_ec = (undefined1 *)0x560598;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      iStack_e4 = 0x5605a3;
      iVar5 = FUN_004032b4();
      *(int *)(unaff_EBP + 0x28) = iVar5;
      *(undefined4 *)(unaff_EBP + 0x1c) = 0;
      if (iVar5 != 0) {
        piStack_e0 = (int *)0x5605b9;
        iVar5 = FUN_0041a581();
        if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
          piStack_e0 = (int *)0x5605ca;
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      piStack_e0 = (int *)0x5605da;
      piVar8 = (int *)(unaff_EBP + -0x84);
      iVar5 = FUN_00402bc3();
      piStack_e0 = piVar8;
      if (iVar5 < 0) {
        piStack_e0 = (int *)0x5605e5;
        FUN_00878dfb();
        piStack_e0 = extraout_ECX_03;
      }
      puStack_e8 = (undefined1 *)&piStack_e0;
      *(int ***)(unaff_EBP + 0x18) = &piStack_e0;
      iStack_e4 = 0x583;
      puStack_ec = (undefined1 *)0x5605fa;
      FUN_00679e4e();
      iStack_e4 = unaff_EBP + -0x58;
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      puStack_e8 = (undefined1 *)0x56060a;
      FUN_0040263d();
      puStack_e8 = (undefined1 *)0x560611;
      piStack_e0 = (int *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      iStack_e4 = 0x56061b;
      uVar7 = FUN_00412550();
      *(undefined4 *)(unaff_EBP + -0x3c) = uVar7;
      iStack_e4 = unaff_EBP + -0x58;
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      puStack_e8 = (undefined1 *)0x56062b;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        piStack_e0 = (int *)0x560638;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + 0x2c) = 0;
      piStack_e0 = (int *)(unaff_EBP + 0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      iStack_e4 = 0x56064f;
      piVar8 = (int *)FUN_00679d86();
      iStack_e4 = *piVar8;
      piStack_e0 = (int *)(unaff_EBP + 0x2c);
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      puStack_e8 = (undefined1 *)0x560660;
      FUN_004506a3();
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      if (*(int *)(unaff_EBP + 0x18) != 0) {
        piStack_e0 = (int *)0x560677;
        FUN_00403384();
      }
      piStack_e0 = (int *)0x560681;
      FUN_00403191();
      piStack_e0 = *(int **)(unaff_EBP + -0x3c);
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      iStack_e4 = 0xc;
      puStack_f0 = (undefined1 *)&puStack_e8;
      *(undefined1 ***)(unaff_EBP + 0x18) = &puStack_e8;
      puStack_ec = (undefined1 *)0xa;
      iStack_f4 = 0x56069e;
      FUN_00679e4e();
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      puStack_ec = (undefined1 *)0x5606aa;
      FUN_0044974c();
      puStack_ec = (undefined1 *)0x5606b1;
      FUN_004503f9();
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      piStack_e0 = (int *)0x5606be;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        piStack_e0 = (int *)0x5606c9;
        FUN_00878dfb();
      }
      piStack_e0 = (int *)0x5606d2;
      FUN_00403191();
      *(int ***)(unaff_EBP + 0x18) = &piStack_e0;
      iStack_e4 = *(int *)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      puStack_e8 = (undefined1 *)0x5606e8;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      iStack_e4 = 0x5606f4;
      FUN_0044974c();
      iStack_e4 = 0x5606fb;
      uVar7 = FUN_00448ebb();
      *(undefined4 *)(unaff_EBP + -0x3c) = uVar7;
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      piStack_e0 = (int *)0x56070b;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        piStack_e0 = (int *)0x560716;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + 0x24) == 0) {
        piStack_e0 = (int *)0x560727;
        FUN_00878dfb();
      }
      uVar7 = FUN_0040e48b();
      *(undefined4 *)(unaff_EBP + 0x18) = uVar7;
      if (*(int *)(unaff_EBP + 0x30) == 0) {
        piStack_e0 = (int *)0x56073e;
        FUN_00878dfb();
      }
      uVar7 = FUN_0040eea9();
      iVar5 = *(int *)(unaff_EBP + 0x18);
      *(undefined4 *)(unaff_EBP + -0x40) = uVar7;
      *(int *)(unaff_EBP + 0x28) = ((iVar5 + -1 + *(int *)(unaff_EBP + -0x3c)) / iVar5) * iVar5;
      if (*(int *)(unaff_EBP + 0x1c) == 0) {
        piStack_e0 = (int *)0x560768;
        FUN_00878dfb();
        if (*(int *)(unaff_EBP + 0x1c) == 0) {
          piStack_e0 = (int *)0x560774;
          FUN_00878dfb();
        }
      }
      *(undefined4 *)(unaff_EBP + 0x18) = *(undefined4 *)(unaff_EBP + 0x1c);
      uVar7 = FUN_0040e48b();
      *(undefined4 *)(unaff_EBP + -0x28) = uVar7;
      iVar5 = FUN_0040eea9();
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x28) - iVar5;
      if (*(int *)(unaff_EBP + 0x1c) == 0) {
        piStack_e0 = (int *)0x56079e;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + 0x24) == 0) {
        piStack_e0 = (int *)0x5607aa;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + 0x24);
      if (*(int *)(unaff_EBP + 0x30) == 0) {
        piStack_e0 = (int *)0x5607bc;
        FUN_00878dfb();
      }
      uVar7 = FUN_0040eed0();
      *(undefined4 *)(unaff_EBP + 0x18) = uVar7;
      iVar5 = FUN_0040eed0();
      if (iVar5 < *(int *)(unaff_EBP + 0x18)) {
        iVar5 = *(int *)(unaff_EBP + 0x18);
      }
      *(int *)(unaff_EBP + 0x18) = iVar5;
      iVar5 = FUN_0040eed0();
      if (iVar5 < *(int *)(unaff_EBP + 0x18)) {
        iVar5 = *(int *)(unaff_EBP + 0x18);
      }
      *(int *)(unaff_EBP + 0x18) = iVar5;
      if (*(int *)(unaff_EBP + 0x30) == 0) {
        piStack_e0 = (int *)0x5607f9;
        FUN_00878dfb();
      }
      iVar5 = FUN_0040eea9();
      *(int *)(unaff_EBP + -0x28) = iVar5 + *(int *)(unaff_EBP + -0x18) + *(int *)(unaff_EBP + 0x28)
      ;
      if (*(int *)(unaff_EBP + 0x1c) == 0) {
        piStack_e0 = (int *)0x560816;
        FUN_00878dfb();
        if (*(int *)(unaff_EBP + 0x1c) == 0) {
          piStack_e0 = (int *)0x560822;
          FUN_00878dfb();
        }
      }
      *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + 0x1c);
      if (*(int *)(unaff_EBP + 0x24) == 0) {
        piStack_e0 = (int *)0x560834;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + -0x5c) = *(int *)(unaff_EBP + 0x24);
      if (*(int *)(unaff_EBP + 0x24) == 0) {
        piStack_e0 = (int *)0x560844;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + 0x24);
      if (*(int *)(unaff_EBP + 0x30) == 0) {
        piStack_e0 = (int *)0x560856;
        FUN_00878dfb();
      }
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + 0x30);
      if (*(int *)(unaff_EBP + 0x30) == 0) {
        piStack_e0 = (int *)0x560866;
        FUN_00878dfb();
      }
      iVar5 = FUN_0040eed0();
      iVar6 = FUN_0040e53d();
      *(int *)(unaff_EBP + -0x18) = iVar6 - iVar5;
      iVar5 = FUN_0040eed0();
      iVar6 = FUN_0040e53d();
      *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x18);
      if (*(uint *)(unaff_EBP + -0x18) <= (uint)(iVar6 - iVar5)) {
        *(int *)(unaff_EBP + -0x14) = iVar6 - iVar5;
      }
      iVar5 = FUN_0040e53d();
      iVar6 = FUN_0040eed0();
      uVar9 = *(uint *)(unaff_EBP + -0x14);
      if (*(uint *)(unaff_EBP + -0x14) <= (uint)(iVar5 - iVar6)) {
        uVar9 = iVar5 - iVar6;
      }
      *(undefined4 *)(unaff_EBP + 0x14) = 0;
      *(uint *)(unaff_EBP + -0x5c) = uVar9 + *(int *)(unaff_EBP + 0x18);
      piStack_e0 = (int *)(unaff_EBP + -0x20);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      iStack_e4 = 0x5608db;
      piVar8 = (int *)FUN_00679d86();
      iStack_e4 = *piVar8;
      piStack_e0 = (int *)(unaff_EBP + 0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x22;
      puStack_e8 = (undefined1 *)0x5608ed;
      FUN_0040381b();
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      if (*(int *)(unaff_EBP + -0x20) != 0) {
        piStack_e0 = (int *)0x560904;
        FUN_00403384();
      }
      piStack_e0 = (int *)0x56090e;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      piStack_e0 = (int *)0x56091b;
      FUN_00403191();
      piStack_104 = *(int **)(unaff_EBP + 0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      if (piStack_104 == (int *)0x0) {
        piStack_e0 = (int *)0x560930;
        FUN_00878dfb();
        piStack_104 = *(int **)(unaff_EBP + 0x14);
      }
      puStack_e8 = *(undefined1 **)(unaff_EBP + -0x74);
      iStack_e4 = *(int *)(unaff_EBP + -0x70);
      iVar5 = *piStack_104;
      piStack_e0 = *(int **)(unaff_EBP + -0x6c);
      uStack_fc = *(undefined4 *)(unaff_EBP + -0x5c);
      uStack_100 = *(undefined4 *)(unaff_EBP + -0x28);
      uStack_f8 = *(undefined4 *)(unaff_EBP + -0x38);
      iStack_f4 = *(undefined4 *)(unaff_EBP + -0x34);
      puStack_f0 = *(undefined1 **)(unaff_EBP + -0x30);
      *(int **)(unaff_EBP + -0x20) = piStack_104;
      puStack_ec = *(undefined1 **)(unaff_EBP + -0x2c);
      puStack_108 = (undefined4 *)0x56095a;
      iVar5 = (**(code **)(iVar5 + 0x2c))();
      if (iVar5 < 0) {
        puStack_108 = (undefined4 *)&DAT_00963cc8;
        uStack_10c = *(undefined4 *)(unaff_EBP + -0x20);
        uStack_114 = 0x56096c;
        iStack_110 = iVar5;
        FUN_00878e09();
      }
      puStack_108 = (undefined4 *)(unaff_EBP + -0x38);
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      uStack_10c = 0x560979;
      puStack_108 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_108 < 0) {
        uStack_10c = 0x560984;
        FUN_00878dfb();
      }
      puStack_108 = (undefined4 *)(unaff_EBP + -0x74);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      uStack_10c = 0x560991;
      puStack_108 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_108 < 0) {
        uStack_10c = 0x56099c;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      if (0 < *(int *)(unaff_EBP + 0x28)) {
        do {
          puStack_108 = &DAT_00980690;
          uStack_10c = 0x5609b3;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x25;
          if (*(int *)(unaff_EBP + 0x24) == 0) {
            puStack_108 = (undefined4 *)0x80004003;
            uStack_10c = 0x5609c7;
            FUN_00878dfb();
          }
          if (*(int *)(unaff_EBP + 0x14) == 0) {
            puStack_108 = (undefined4 *)0x80004003;
            uStack_10c = 0x5609d7;
            FUN_00878dfb();
          }
          piVar8 = *(int **)(unaff_EBP + 0x14);
          *(int **)(unaff_EBP + -0x18) = piVar8;
          *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + 0x24);
          puStack_108 = (undefined4 *)0x5609e8;
          iVar5 = FUN_0040eed0();
          piStack_11c = (int *)(*(int *)(unaff_EBP + 0x18) - iVar5);
          uStack_118 = *(undefined4 *)(unaff_EBP + -0x20);
          uStack_114 = *(undefined4 *)(unaff_EBP + -0x38);
          iStack_110 = *(int *)(unaff_EBP + -0x34);
          puStack_120 = (undefined *)(*(int *)(unaff_EBP + -0x14) + *(int *)(unaff_EBP + -0x40));
          uStack_10c = *(undefined4 *)(unaff_EBP + -0x30);
          piStack_124 = *(int **)(unaff_EBP + -0x18);
          puStack_108 = *(undefined4 **)(unaff_EBP + -0x2c);
          puStack_128 = (undefined4 *)0x560a11;
          iVar5 = (**(code **)(*piVar8 + 0x80))();
          if (iVar5 < 0) {
            puStack_108 = (undefined4 *)&DAT_00963cc8;
            uStack_10c = *(undefined4 *)(unaff_EBP + -0x18);
            uStack_114 = 0x560a23;
            iStack_110 = iVar5;
            FUN_00878e09();
          }
          puStack_108 = (undefined4 *)(unaff_EBP + -0x38);
          *(undefined1 *)(unaff_EBP + -4) = 0x21;
          uStack_10c = 0x560a30;
          puStack_108 = (undefined4 *)FUN_00402bc3();
          if ((int)puStack_108 < 0) {
            uStack_10c = 0x560a3b;
            FUN_00878dfb();
          }
          if (*(int *)(unaff_EBP + 0x24) == 0) {
            puStack_108 = (undefined4 *)0x80004003;
            uStack_10c = 0x560a4b;
            FUN_00878dfb();
          }
          puStack_108 = (undefined4 *)0x560a53;
          iVar5 = FUN_0040e48b();
          *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + iVar5;
        } while (*(int *)(unaff_EBP + -0x14) < *(int *)(unaff_EBP + 0x28));
      }
      puStack_108 = &DAT_00980690;
      uStack_10c = 0x560a6b;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      if (*(int *)(unaff_EBP + 0x30) == 0) {
        puStack_108 = (undefined4 *)0x80004003;
        uStack_10c = 0x560a7f;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + 0x14) == 0) {
        puStack_108 = (undefined4 *)0x80004003;
        uStack_10c = 0x560a8f;
        FUN_00878dfb();
      }
      piVar8 = *(int **)(unaff_EBP + 0x14);
      *(int **)(unaff_EBP + -0x18) = piVar8;
      *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + 0x30);
      puStack_108 = (undefined4 *)0x560aa0;
      iVar5 = FUN_0040eed0();
      uStack_118 = *(undefined4 *)(unaff_EBP + -0x20);
      piStack_11c = (int *)(*(int *)(unaff_EBP + 0x18) - iVar5);
      uStack_114 = *(undefined4 *)(unaff_EBP + -0x38);
      iStack_110 = *(undefined4 *)(unaff_EBP + -0x34);
      uStack_10c = *(undefined4 *)(unaff_EBP + -0x30);
      puStack_120 = (undefined *)0x0;
      piStack_124 = *(int **)(unaff_EBP + -0x18);
      puStack_108 = *(undefined4 **)(unaff_EBP + -0x2c);
      puStack_128 = (undefined4 *)0x560ac2;
      iVar5 = (**(code **)(*piVar8 + 0x80))();
      if (iVar5 < 0) {
        puStack_128 = (undefined4 *)&DAT_00963cc8;
        uStack_12c = *(undefined4 *)(unaff_EBP + -0x18);
        piStack_134 = (int *)0x560ad4;
        iStack_130 = iVar5;
        FUN_00878e09();
      }
      puStack_128 = (undefined4 *)(unaff_EBP + -0x38);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      uStack_12c = 0x560ae1;
      puStack_128 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_128 < 0) {
        uStack_12c = 0x560aec;
        FUN_00878dfb();
      }
      puStack_128 = &DAT_00980690;
      uStack_12c = 0x560af5;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x27;
      if (*(int *)(unaff_EBP + 0x1c) == 0) {
        puStack_128 = (undefined4 *)0x80004003;
        uStack_12c = 0x560b09;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + 0x14) == 0) {
        puStack_128 = (undefined4 *)0x80004003;
        uStack_12c = 0x560b19;
        FUN_00878dfb();
      }
      piVar8 = *(int **)(unaff_EBP + 0x14);
      *(int **)(unaff_EBP + -0x18) = piVar8;
      *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + 0x1c);
      puStack_128 = (undefined4 *)0x560b2a;
      iStack_140 = FUN_0040e48b();
      puStack_138 = *(undefined **)(unaff_EBP + -0x20);
      iStack_140 = *(int *)(unaff_EBP + -0x28) - iStack_140;
      piStack_134 = *(int **)(unaff_EBP + -0x38);
      iStack_130 = *(undefined4 *)(unaff_EBP + -0x34);
      piStack_13c = (int *)0x0;
      uStack_12c = *(undefined4 *)(unaff_EBP + -0x30);
      iStack_144 = *(undefined4 *)(unaff_EBP + -0x18);
      puStack_128 = *(undefined4 **)(unaff_EBP + -0x2c);
      puStack_148 = (undefined4 *)0x560b4c;
      iVar5 = (**(code **)(*piVar8 + 0x80))();
      if (iVar5 < 0) {
        puStack_148 = (undefined4 *)&DAT_00963cc8;
        piStack_14c = *(int **)(unaff_EBP + -0x18);
        piStack_154 = (int *)0x560b5e;
        puStack_150 = (undefined *)iVar5;
        FUN_00878e09();
      }
      puStack_148 = (undefined4 *)(unaff_EBP + -0x38);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      piStack_14c = (int *)0x560b6b;
      puStack_148 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_148 < 0) {
        piStack_14c = (int *)0x560b78;
        FUN_00878dfb();
      }
      puStack_148 = &DAT_00980690;
      piStack_14c = (int *)0x560b81;
      FUN_00403191();
      puStack_148 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 0x28;
      piStack_14c = (int *)0x560b8e;
      FUN_00403191();
      puStack_148 = (undefined4 *)(unaff_EBP + -0x74);
      piStack_14c = (int *)(unaff_EBP + -0x38);
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      puStack_150 = (undefined *)0x560ba2;
      puStack_150 = (undefined *)FUN_00449749();
      *(int ***)(unaff_EBP + -0x44) = &piStack_154;
      FUN_00448a17();
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      FUN_004115d9();
      FUN_00448e3a();
      puStack_148 = (undefined4 *)(unaff_EBP + -0x38);
      *(undefined1 *)(unaff_EBP + -4) = 0x28;
      piStack_14c = (int *)0x560be7;
      puStack_148 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_148 < 0) {
        piStack_14c = (int *)0x560bf2;
        FUN_00878dfb();
      }
      puStack_148 = (undefined4 *)(unaff_EBP + -0x74);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      piStack_14c = (int *)0x560bff;
      puStack_148 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_148 < 0) {
        piStack_14c = (int *)0x560c0a;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + 0x14) == 0) {
        puStack_148 = (undefined4 *)0x80004003;
        piStack_14c = (int *)0x560c19;
        FUN_00878dfb();
      }
      piVar8 = *(int **)(unaff_EBP + 0x14);
      puStack_148 = (undefined4 *)(*(int *)(unaff_EBP + 0x28) / 2 + *(int *)(unaff_EBP + -0x40));
      puStack_150 = (undefined *)0x560c2e;
      piStack_14c = piVar8;
      iVar5 = (**(code **)(*piVar8 + 0x70))();
      if (iVar5 < 0) {
        puStack_150 = &DAT_00963cc8;
        piStack_154 = piVar8;
        FUN_00878e09();
      }
      if (*(int *)(unaff_EBP + 0x14) == 0) {
        puStack_150 = (undefined *)0x80004003;
        piStack_154 = (int *)0x560c4d;
        FUN_00878dfb();
      }
      piStack_154 = *(int **)(unaff_EBP + 0x14);
      puStack_150 = (undefined *)0xfffffffe;
      iVar5 = (**(code **)(*piStack_154 + 0x78))();
      if (iVar5 < 0) {
        FUN_00878e09();
      }
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x2b;
      FUN_004031b7();
      bVar11 = DAT_0097c1ac == 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x2c;
      if (bVar11) {
        FUN_00878dfb();
      }
      puVar3 = (undefined4 *)FUN_0042a39f();
      pIVar1 = (IBinding *)*puVar3;
      p_Var10 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
                (*(int *)(unaff_EBP + -100) + 0x70);
      *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + 8) = p_Var10;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var10,pIVar1);
      FUN_00412600();
      *(undefined1 *)(unaff_EBP + -4) = 0x2b;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        FUN_00878dfb();
      }
      FUN_0040ee87();
      iVar5 = *(int *)p_Var10;
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      if (iVar5 == 0) {
        FUN_00878dfb();
      }
      iVar5 = *(int *)**(undefined4 **)(unaff_EBP + 8);
      *(int **)(unaff_EBP + 0x18) = (int *)**(undefined4 **)(unaff_EBP + 8);
      iVar5 = (**(code **)(iVar5 + 0xfc))();
      if (iVar5 < 0) {
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        FUN_00878dfb();
      }
      piVar8 = *(int **)(unaff_EBP + 8);
      if (*piVar8 == 0) {
        FUN_00878dfb();
      }
      iVar5 = (**(code **)(*(int *)*piVar8 + 0xb4))();
      if (iVar5 < 0) {
        FUN_00878e09();
      }
      FUN_0040ee87();
      iVar5 = *piVar8;
      *(undefined1 *)(unaff_EBP + -4) = 0x2e;
      if (iVar5 == 0) {
        FUN_00878dfb();
      }
      piStack_184 = (int *)**(undefined4 **)(unaff_EBP + 8);
      iVar5 = *piStack_184;
      *(int **)(unaff_EBP + 0x18) = piStack_184;
      puStack_188 = (undefined *)0x560dcb;
      iVar5 = (**(code **)(iVar5 + 100))();
      if (iVar5 < 0) {
        puStack_188 = &DAT_00963de8;
        piStack_18c = *(int **)(unaff_EBP + 0x18);
        FUN_00878e09(iVar5);
      }
      puStack_188 = (undefined *)(unaff_EBP + -0x38);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      piStack_18c = (int *)0x560dea;
      puStack_188 = (undefined *)FUN_00402bc3();
      if ((int)puStack_188 < 0) {
        piStack_18c = (int *)0x560df5;
        FUN_00878dfb();
      }
      piVar8 = *(int **)(unaff_EBP + 8);
      if (*piVar8 == 0) {
        puStack_188 = (undefined *)0x80004003;
        piStack_18c = (int *)0x560e07;
        FUN_00878dfb();
      }
      piVar2 = (int *)*piVar8;
      puStack_188 = (undefined *)0xffffffff;
      piStack_18c = piVar2;
      iVar5 = (**(code **)(*piVar2 + 0xe0))();
      if (iVar5 < 0) {
        FUN_00878e09(iVar5,piVar2,&DAT_00963df8);
      }
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x31;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x32;
      FUN_00403191(&DAT_00980690);
      iVar5 = *piVar8;
      *(undefined1 *)(unaff_EBP + -4) = 0x33;
      if (iVar5 == 0) {
        FUN_00878dfb(0x80004003);
      }
      FUN_004250ac(unaff_EBP + -0x58,*(undefined4 *)(unaff_EBP + 0x14),unaff_EBP + -0x38,
                   unaff_EBP + -0x74,unaff_EBP + -0xb4,unaff_EBP + -0xa4,unaff_EBP + -0x94);
      iVar5 = FUN_00402bc3(unaff_EBP + -0x58);
      if (iVar5 < 0) {
        FUN_00878dfb(iVar5);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x32;
      iVar5 = FUN_00402bc3(unaff_EBP + -0x38);
      if (iVar5 < 0) {
        FUN_00878dfb(iVar5);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x31;
      iVar5 = FUN_00402bc3(unaff_EBP + -0x74);
      if (iVar5 < 0) {
        FUN_00878dfb(iVar5);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      iVar5 = FUN_00402bc3(unaff_EBP + -0xb4);
      if (iVar5 < 0) {
        FUN_00878dfb(iVar5);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x2f;
      iVar5 = FUN_00402bc3(unaff_EBP + -0xa4);
      if (iVar5 < 0) {
        FUN_00878dfb(iVar5);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      iVar5 = FUN_00402bc3(unaff_EBP + -0x94);
      if (iVar5 < 0) {
        FUN_00878dfb(iVar5);
      }
      if (*(int *)(unaff_EBP + 0x14) == 0) {
        FUN_00878dfb(0x80004003);
      }
      uVar7 = FUN_0040e53d();
      FUN_004125e6();
      FUN_004497b5();
      FUN_004125e6();
      FUN_004125e6();
      FUN_004125e6();
      FUN_004027eb();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        FUN_00434e38(*(int *)(unaff_EBP + -0x24) + -0xc);
      }
      FUN_00412600();
      FUN_004125d9();
      goto LAB_00561def;
    }
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x34;
    if (iVar5 == 0x3e9) {
      piStack_e0 = (int *)(unaff_EBP + -0xb8);
      iStack_e4 = 0x561255;
      piVar8 = (int *)FUN_00679d86();
      iStack_e4 = *piVar8;
      piStack_e0 = (int *)(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 0x35;
      puStack_e8 = (undefined1 *)0x561266;
      FUN_004506a3();
      *(undefined1 *)(unaff_EBP + -4) = 0x34;
      if (*(int *)(unaff_EBP + -0xb8) != 0) {
        piStack_e0 = (int *)0x561280;
        FUN_00403384();
      }
      piStack_e0 = (int *)(unaff_EBP + -0x44);
      iStack_e4 = 0x561291;
      FUN_00679e4e();
      *(undefined1 *)(unaff_EBP + -4) = 0x36;
      piStack_e0 = (int *)0x56129e;
      FUN_0044f5f6();
      piStack_e0 = (int *)0xffffff00;
      iStack_e4 = 0xc;
      puStack_f0 = (undefined1 *)&puStack_e8;
      *(undefined1 ***)(unaff_EBP + -0x60) = &puStack_e8;
      puStack_ec = (undefined1 *)0xa;
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      iStack_f4 = 0x5612bd;
      FUN_00679e4e();
      *(undefined1 *)(unaff_EBP + -4) = 0x37;
      puStack_ec = (undefined1 *)0x5612c9;
      FUN_0044974c();
      puStack_ec = (undefined1 *)0x5612d0;
      FUN_004503f9();
      *(undefined1 *)(unaff_EBP + -4) = 0x36;
      piStack_e0 = (int *)0x5612dd;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        piStack_e0 = (int *)0x5612e8;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x34;
LAB_005612ef:
      FUN_00402fa6();
LAB_005612f4:
      *(undefined4 *)(unaff_EBP + -0x14) = 0xa0000000;
    }
    else {
      if (iVar5 == 0x3ea) {
        piStack_e0 = (int *)(unaff_EBP + -0x14);
        iStack_e4 = 0x56119d;
        piVar8 = (int *)FUN_00679d86();
        iStack_e4 = *piVar8;
        piStack_e0 = (int *)(unaff_EBP + -0x1c);
        *(undefined1 *)(unaff_EBP + -4) = 0x39;
        puStack_e8 = (undefined1 *)0x5611ae;
        FUN_004506a3();
        *(undefined1 *)(unaff_EBP + -4) = 0x34;
        if (*(int *)(unaff_EBP + -0x14) != 0) {
          piStack_e0 = (int *)0x5611c5;
          FUN_00403384();
        }
        piStack_e0 = (int *)(unaff_EBP + -0x24);
        iStack_e4 = 0x5611d6;
        FUN_00679e4e();
        *(undefined1 *)(unaff_EBP + -4) = 0x3a;
        piStack_e0 = (int *)0x5611e6;
        FUN_0044f5f6();
        piStack_e0 = (int *)0xffffff00;
        iStack_e4 = 0xc;
        puStack_f0 = (undefined1 *)&puStack_e8;
        *(undefined1 ***)(unaff_EBP + -0x60) = &puStack_e8;
        puStack_ec = (undefined1 *)0xa;
        *(undefined1 *)(unaff_EBP + -4) = 0x3b;
        iStack_f4 = 0x561208;
        FUN_00679e4e();
        *(undefined1 *)(unaff_EBP + -4) = 0x3b;
        puStack_ec = (undefined1 *)0x561214;
        FUN_0044974c();
        puStack_ec = (undefined1 *)0x56121b;
        FUN_004503f9();
        *(undefined1 *)(unaff_EBP + -4) = 0x3a;
        piStack_e0 = (int *)0x56122b;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          piStack_e0 = (int *)0x561236;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x34;
        goto LAB_005612ef;
      }
      if ((0x3eb < iVar5) && (iVar5 < 0x3ee)) {
        piStack_e0 = (int *)(unaff_EBP + -0x20);
        iStack_e4 = 0x560ffd;
        piVar8 = (int *)FUN_00679d86();
        iStack_e4 = *piVar8;
        piStack_e0 = (int *)(unaff_EBP + -0x1c);
        *(undefined1 *)(unaff_EBP + -4) = 0x3d;
        puStack_e8 = (undefined1 *)0x56100e;
        FUN_004506a3();
        *(undefined1 *)(unaff_EBP + -4) = 0x34;
        if (*(int *)(unaff_EBP + -0x20) != 0) {
          piStack_e0 = (int *)0x561025;
          FUN_00403384();
        }
        piStack_e0 = (int *)(unaff_EBP + -0x5c);
        iStack_e4 = 0x561036;
        FUN_00679e4e();
        *(undefined1 *)(unaff_EBP + -4) = 0x3e;
        piStack_e0 = (int *)0x561046;
        FUN_0044f5f6();
        piStack_e0 = (int *)0xffffffff;
        iStack_e4 = 0xc;
        puStack_f0 = (undefined1 *)&puStack_e8;
        *(undefined1 ***)(unaff_EBP + -0x60) = &puStack_e8;
        puStack_ec = (undefined1 *)0xa;
        *(undefined1 *)(unaff_EBP + -4) = 0x3f;
        iStack_f4 = 0x561065;
        FUN_00679e4e();
        *(undefined1 *)(unaff_EBP + -4) = 0x3f;
        puStack_ec = (undefined1 *)0x561071;
        FUN_0044974c();
        puStack_ec = (undefined1 *)0x561078;
        FUN_004503f9();
        *(undefined1 *)(unaff_EBP + -4) = 0x3e;
        piStack_e0 = (int *)0x561088;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          piStack_e0 = (int *)0x561093;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x34;
        goto LAB_005612ef;
      }
      if (*(int *)(unaff_EBP + 0x18) != 1) {
        piStack_e0 = (int *)(unaff_EBP + -0x18);
        iStack_e4 = 0x561174;
        puVar3 = (undefined4 *)FUN_007d4a9a();
        piStack_e0 = (int *)0x561180;
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x1c),
                   (IBinding *)*puVar3);
        FUN_004497b5();
        goto LAB_005612f4;
      }
      piStack_e0 = (int *)(unaff_EBP + -0x3c);
      iStack_e4 = 0x5610b9;
      piVar8 = (int *)FUN_00679d86();
      iStack_e4 = *piVar8;
      piStack_e0 = (int *)(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 0x41;
      puStack_e8 = (undefined1 *)0x5610ca;
      FUN_004506a3();
      *(undefined1 *)(unaff_EBP + -4) = 0x34;
      if (*(int *)(unaff_EBP + -0x3c) != 0) {
        piStack_e0 = (int *)0x5610e1;
        FUN_00403384();
      }
      piStack_e0 = (int *)(unaff_EBP + -0x28);
      iStack_e4 = 0x5610f2;
      FUN_00679e4e();
      *(undefined1 *)(unaff_EBP + -4) = 0x42;
      piStack_e0 = (int *)0x561102;
      FUN_0044f5f6();
      piStack_e0 = (int *)0xff000000;
      iStack_e4 = 0xc;
      puStack_f0 = (undefined1 *)&puStack_e8;
      *(undefined1 ***)(unaff_EBP + -0x60) = &puStack_e8;
      puStack_ec = (undefined1 *)0xa;
      *(undefined1 *)(unaff_EBP + -4) = 0x43;
      iStack_f4 = 0x561124;
      FUN_00679e4e();
      *(undefined1 *)(unaff_EBP + -4) = 0x43;
      puStack_ec = (undefined1 *)0x561130;
      FUN_0044974c();
      puStack_ec = (undefined1 *)0x561137;
      FUN_004503f9();
      *(undefined1 *)(unaff_EBP + -4) = 0x42;
      piStack_e0 = (int *)0x561147;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        piStack_e0 = (int *)0x561152;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x34;
      FUN_00402fa6();
      *(undefined4 *)(unaff_EBP + -0x14) = 0xff2c80ad;
    }
    piStack_e0 = (int *)0x56130c;
    FUN_00403191();
    *(int ***)(unaff_EBP + -0x60) = &piStack_e0;
    iStack_e4 = *(int *)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x45;
    puStack_e8 = (undefined1 *)0x561325;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0x45;
    iStack_e4 = 0x561331;
    FUN_0044974c();
    iStack_e4 = 0x561338;
    uVar7 = FUN_00448ebb();
    *(undefined4 *)(unaff_EBP + -0x3c) = uVar7;
    *(undefined1 *)(unaff_EBP + -4) = 0x34;
    piStack_e0 = (int *)0x56134b;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      piStack_e0 = (int *)0x561356;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x1c) == 0) {
      piStack_e0 = (int *)0x561365;
      FUN_00878dfb();
    }
    uVar7 = FUN_004a2734();
    *(undefined4 *)(unaff_EBP + -0x28) = uVar7;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    piStack_e0 = (int *)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    iStack_e4 = 0x561387;
    piVar8 = (int *)FUN_00679d86();
    iStack_e4 = *piVar8;
    piStack_e0 = (int *)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0x48;
    puStack_e8 = (undefined1 *)0x561398;
    FUN_0040381b();
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    if (*(int *)(unaff_EBP + -0x44) != 0) {
      piStack_e0 = (int *)0x5613af;
      FUN_00403384();
    }
    *(undefined4 *)(unaff_EBP + -0x48) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x49;
    if (((*(int *)(unaff_EBP + 0x14) == 0x3ec) &&
        ((*(short *)(unaff_EBP + 0x1c) != 0 || (*(short *)(unaff_EBP + 0x24) != 0)))) ||
       (*(undefined4 *)(unaff_EBP + -0x24) = 0, *(int *)(unaff_EBP + 0x14) == 0x3ed)) {
      *(undefined4 *)(unaff_EBP + -0x24) = 1;
    }
    if (*(int *)(unaff_EBP + 0x14) == 0x3ed) {
      piStack_e0 = (int *)(unaff_EBP + 0x14);
      iStack_e4 = 0x5613fa;
      puVar3 = (undefined4 *)FUN_008572ad();
      piStack_e0 = (int *)0x561404;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x48),
                 (IBinding *)*puVar3);
LAB_00561436:
      FUN_004125e6();
      if (*(int *)(unaff_EBP + -0x48) == 0) {
        *(undefined4 *)(unaff_EBP + -0x24) = 0;
      }
    }
    else if (*(int *)(unaff_EBP + -0x24) != 0) {
      piStack_e0 = *(int **)(unaff_EBP + 0x1c);
      puStack_ec = (undefined1 *)(unaff_EBP + 0x14);
      iStack_e4 = *(int *)(unaff_EBP + 0x28);
      puStack_e8 = *(undefined1 **)(unaff_EBP + 0x24);
      puStack_f0 = (undefined1 *)0x561429;
      puVar3 = (undefined4 *)FUN_00856c17();
      piStack_e0 = (int *)0x561433;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x48),
                 (IBinding *)*puVar3);
      goto LAB_00561436;
    }
    uVar9 = -(uint)(*(int *)(unaff_EBP + -0x24) != 0) & 0x12;
    *(uint *)(unaff_EBP + 0x1c) = uVar9;
    if (*(int *)(unaff_EBP + 0x18) == 1) {
      *(int *)(unaff_EBP + 0x18) = *(int *)(unaff_EBP + -0x3c) + 5;
      *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + -0x28) + 4;
      piStack_e0 = (int *)0x561761;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x4a;
      piStack_e0 = (int *)0x561771;
      FUN_00403191();
      piStack_104 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x4b;
      if (piStack_104 == (int *)0x0) {
        piStack_e0 = (int *)0x561786;
        FUN_00878dfb();
        piStack_104 = *(int **)(unaff_EBP + -0x10);
      }
      puStack_e8 = *(undefined1 **)(unaff_EBP + -200);
      iStack_e4 = *(int *)(unaff_EBP + -0xc4);
      iVar5 = *piStack_104;
      piStack_e0 = *(int **)(unaff_EBP + -0xc0);
      uStack_fc = *(undefined4 *)(unaff_EBP + 0x14);
      uStack_100 = *(undefined4 *)(unaff_EBP + 0x18);
      uStack_f8 = *(undefined4 *)(unaff_EBP + -0xd8);
      iStack_f4 = *(undefined4 *)(unaff_EBP + -0xd4);
      puStack_f0 = *(undefined1 **)(unaff_EBP + -0xd0);
      *(int **)(unaff_EBP + 0x24) = piStack_104;
      puStack_ec = *(undefined1 **)(unaff_EBP + -0xcc);
      puStack_108 = (undefined4 *)0x5617b6;
      iVar5 = (**(code **)(iVar5 + 0x2c))();
      if (iVar5 < 0) {
        puStack_108 = (undefined4 *)&DAT_00963cc8;
        uStack_10c = *(undefined4 *)(unaff_EBP + 0x24);
        uStack_114 = 0x5617c8;
        iStack_110 = iVar5;
        FUN_00878e09();
      }
      puStack_108 = (undefined4 *)(unaff_EBP + -0xd8);
      *(undefined1 *)(unaff_EBP + -4) = 0x4a;
      uStack_10c = 0x5617d8;
      puStack_108 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_108 < 0) {
        uStack_10c = 0x5617e5;
        FUN_00878dfb();
      }
      puStack_108 = (undefined4 *)(unaff_EBP + -200);
      *(undefined1 *)(unaff_EBP + -4) = 0x49;
      uStack_10c = 0x5617f5;
      puStack_108 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_108 < 0) {
        uStack_10c = 0x561800;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        puStack_108 = (undefined4 *)0x80004003;
        uStack_10c = 0x56180f;
        FUN_00878dfb();
      }
      puStack_108 = *(undefined4 **)(unaff_EBP + -0x14);
      piVar8 = *(int **)(unaff_EBP + -0x10);
      uStack_10c = *(undefined4 *)(unaff_EBP + 0x14);
      iStack_110 = *(int *)(unaff_EBP + 0x18);
      uStack_114 = 0;
      uStack_118 = 0;
      puStack_120 = (undefined *)0x561826;
      piStack_11c = piVar8;
      iVar5 = (**(code **)(*piVar8 + 0x8c))();
      if (iVar5 < 0) {
        puStack_120 = &DAT_00963cc8;
        uStack_12c = 0x561836;
        puStack_128 = (undefined4 *)iVar5;
        piStack_124 = piVar8;
        FUN_00878e09();
      }
      piStack_134 = *(int **)(unaff_EBP + -0x10);
      if (piStack_134 == (int *)0x0) {
        puStack_120 = (undefined *)0x80004003;
        piStack_124 = (int *)0x561847;
        FUN_00878dfb();
        piStack_134 = *(int **)(unaff_EBP + -0x10);
      }
      iVar5 = *piStack_134;
      puStack_120 = (undefined *)0xffffff;
      piStack_124 = (int *)0x1;
      puStack_128 = (undefined4 *)0x1;
      uStack_12c = 0;
      iStack_130 = 0;
      *(int **)(unaff_EBP + 0x24) = piStack_134;
      puStack_138 = (undefined *)0x561865;
      iVar5 = (**(code **)(iVar5 + 0x8c))();
      if (iVar5 < 0) {
        puStack_138 = &DAT_00963cc8;
        piStack_13c = *(int **)(unaff_EBP + 0x24);
        iStack_144 = 0x561877;
        iStack_140 = iVar5;
        FUN_00878e09();
      }
      piStack_14c = *(int **)(unaff_EBP + -0x10);
      if (piStack_14c == (int *)0x0) {
        puStack_138 = (undefined *)0x80004003;
        piStack_13c = (int *)0x561888;
        FUN_00878dfb();
        piStack_14c = *(int **)(unaff_EBP + -0x10);
      }
      iVar5 = *piStack_14c;
      puStack_138 = (undefined *)0xffffff;
      piStack_13c = (int *)0x1;
      iStack_140 = 1;
      iStack_144 = *(int *)(unaff_EBP + 0x14) + -1;
      puStack_148 = (undefined4 *)0x0;
      *(int **)(unaff_EBP + 0x24) = piStack_14c;
      puStack_150 = (undefined *)0x5618a1;
      iVar5 = (**(code **)(iVar5 + 0x8c))();
      if (iVar5 < 0) {
        puStack_150 = &DAT_00963cc8;
        piStack_154 = *(int **)(unaff_EBP + 0x24);
        FUN_00878e09();
      }
      piVar8 = *(int **)(unaff_EBP + -0x10);
      if (piVar8 == (int *)0x0) {
        puStack_150 = (undefined *)0x80004003;
        piStack_154 = (int *)0x5618c4;
        FUN_00878dfb();
        piVar8 = *(int **)(unaff_EBP + -0x10);
      }
      iVar5 = *piVar8;
      puStack_150 = (undefined *)0xffffff;
      piStack_154 = (int *)0x1;
      *(int **)(unaff_EBP + 0x24) = piVar8;
      iVar5 = (**(code **)(iVar5 + 0x8c))();
      if (iVar5 < 0) {
        FUN_00878e09();
      }
      piVar8 = *(int **)(unaff_EBP + -0x10);
      if (piVar8 == (int *)0x0) {
        FUN_00878dfb();
        piVar8 = *(int **)(unaff_EBP + -0x10);
      }
      iVar5 = *piVar8;
      *(int **)(unaff_EBP + 0x24) = piVar8;
      iVar5 = (**(code **)(iVar5 + 0x8c))();
      if (iVar5 < 0) {
        piStack_184 = *(int **)(unaff_EBP + 0x24);
        piStack_18c = (int *)0x56192e;
        puStack_188 = (undefined *)iVar5;
        FUN_00878e09();
      }
      piVar8 = *(int **)(unaff_EBP + -0x10);
      if (piVar8 == (int *)0x0) {
        piStack_184 = (int *)0x56193f;
        FUN_00878dfb();
        piVar8 = *(int **)(unaff_EBP + -0x10);
      }
      piStack_184 = (int *)(*(int *)(unaff_EBP + 0x14) + -2);
      *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + 0x18) + -2;
      puStack_188 = *(undefined **)(unaff_EBP + 0x14);
      iVar5 = *piVar8;
      piStack_18c = (int *)0x1;
      *(int **)(unaff_EBP + 0x24) = piVar8;
      *(int **)(unaff_EBP + 0x30) = piStack_184;
      iVar5 = (**(code **)(iVar5 + 0x8c))(piVar8,1);
      if (iVar5 < 0) {
        FUN_00878e09(iVar5,*(undefined4 *)(unaff_EBP + 0x24),&DAT_00963cc8);
      }
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar8 = *(int **)(unaff_EBP + -0x10);
      iVar5 = (**(code **)(*piVar8 + 0x8c))
                        (piVar8,1,1,*(undefined4 *)(unaff_EBP + 0x14),
                         *(undefined4 *)(unaff_EBP + 0x30),0xb2ffffff);
      if (iVar5 < 0) {
        piStack_18c = (int *)0x5619b2;
        puStack_188 = (undefined *)iVar5;
        piStack_184 = piVar8;
        FUN_00878e09();
      }
      piStack_184 = (int *)0x5619bb;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x4c;
      piStack_184 = (int *)0x5619cb;
      FUN_00403191();
      piStack_184 = (int *)(unaff_EBP + -0x84);
      *(undefined1 *)(unaff_EBP + -4) = 0x4d;
      puStack_188 = (undefined *)0x5619e2;
      puStack_188 = (undefined *)FUN_00449749();
      *(int ***)(unaff_EBP + 0x14) = &piStack_18c;
      FUN_00448a17(*(undefined4 *)(unaff_EBP + 8));
      uVar12 = 0;
      uVar7 = 2;
      *(undefined1 *)(unaff_EBP + -4) = 0x4d;
      FUN_004115d9(2,0);
      FUN_00448e3a(uVar7,uVar12);
      *(undefined1 *)(unaff_EBP + -4) = 0x4c;
      piStack_184 = (int *)0x561a18;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        piStack_184 = (int *)0x561a23;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x49;
    }
    else {
      *(uint *)(unaff_EBP + 0x18) = uVar9 + 5 + *(int *)(unaff_EBP + -0x3c);
      *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + -0x28) + 4;
      piStack_e0 = (int *)0x561479;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x4f;
      piStack_e0 = (int *)0x561489;
      FUN_00403191();
      piStack_104 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x50;
      if (piStack_104 == (int *)0x0) {
        piStack_e0 = (int *)0x56149e;
        FUN_00878dfb();
        piStack_104 = *(int **)(unaff_EBP + -0x10);
      }
      puStack_e8 = *(undefined1 **)(unaff_EBP + -0xa4);
      iStack_e4 = *(int *)(unaff_EBP + -0xa0);
      iVar5 = *piStack_104;
      piStack_e0 = *(int **)(unaff_EBP + -0x9c);
      uStack_fc = *(undefined4 *)(unaff_EBP + 0x14);
      uStack_100 = *(undefined4 *)(unaff_EBP + 0x18);
      uStack_f8 = *(undefined4 *)(unaff_EBP + -0x94);
      iStack_f4 = *(undefined4 *)(unaff_EBP + -0x90);
      puStack_f0 = *(undefined1 **)(unaff_EBP + -0x8c);
      *(int **)(unaff_EBP + 0x24) = piStack_104;
      puStack_ec = *(undefined1 **)(unaff_EBP + -0x88);
      puStack_108 = (undefined4 *)0x5614ce;
      iVar5 = (**(code **)(iVar5 + 0x2c))();
      if (iVar5 < 0) {
        puStack_108 = (undefined4 *)&DAT_00963cc8;
        uStack_10c = *(undefined4 *)(unaff_EBP + 0x24);
        uStack_114 = 0x5614e0;
        iStack_110 = iVar5;
        FUN_00878e09();
      }
      puStack_108 = (undefined4 *)(unaff_EBP + -0x94);
      *(undefined1 *)(unaff_EBP + -4) = 0x4f;
      uStack_10c = 0x5614f0;
      puStack_108 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_108 < 0) {
        uStack_10c = 0x5614fd;
        FUN_00878dfb();
      }
      puStack_108 = (undefined4 *)(unaff_EBP + -0xa4);
      *(undefined1 *)(unaff_EBP + -4) = 0x49;
      uStack_10c = 0x56150d;
      puStack_108 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_108 < 0) {
        uStack_10c = 0x561518;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        puStack_108 = (undefined4 *)0x80004003;
        uStack_10c = 0x561527;
        FUN_00878dfb();
      }
      puStack_108 = *(undefined4 **)(unaff_EBP + -0x14);
      piVar8 = *(int **)(unaff_EBP + -0x10);
      uStack_10c = *(undefined4 *)(unaff_EBP + 0x14);
      iStack_110 = *(int *)(unaff_EBP + 0x18);
      uStack_114 = 0;
      uStack_118 = *(undefined4 *)(unaff_EBP + 0x1c);
      puStack_120 = (undefined *)0x561540;
      piStack_11c = piVar8;
      iVar5 = (**(code **)(*piVar8 + 0x8c))();
      if (iVar5 < 0) {
        puStack_120 = &DAT_00963cc8;
        uStack_12c = 0x561550;
        puStack_128 = (undefined4 *)iVar5;
        piStack_124 = piVar8;
        FUN_00878e09();
      }
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        puStack_120 = (undefined *)0x3;
        piStack_124 = (int *)0xff;
        puStack_128 = (undefined4 *)0x561567;
        FUN_004031b7();
        piStack_13c = *(int **)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 0x51;
        if (piStack_13c == (int *)0x0) {
          puStack_120 = (undefined *)0x80004003;
          piStack_124 = (int *)0x56157c;
          FUN_00878dfb();
          piStack_13c = *(int **)(unaff_EBP + -0x10);
        }
        iVar5 = *piStack_13c;
        iStack_130 = *(int *)(unaff_EBP + -0x48);
        uStack_12c = *(undefined4 *)(unaff_EBP + -0xb4);
        puStack_128 = *(undefined4 **)(unaff_EBP + -0xb0);
        piStack_134 = (int *)0x0;
        piStack_124 = *(int **)(unaff_EBP + -0xac);
        puStack_138 = (undefined *)0x0;
        *(int **)(unaff_EBP + 0x24) = piStack_13c;
        puStack_120 = *(undefined **)(unaff_EBP + -0xa8);
        iStack_140 = 0x5615a1;
        iVar5 = (**(code **)(iVar5 + 0x80))();
        if (iVar5 < 0) {
          puStack_120 = &DAT_00963cc8;
          piStack_124 = *(int **)(unaff_EBP + 0x24);
          uStack_12c = 0x5615b3;
          puStack_128 = (undefined4 *)iVar5;
          FUN_00878e09();
        }
        puStack_120 = (undefined *)(unaff_EBP + -0xb4);
        *(undefined1 *)(unaff_EBP + -4) = 0x49;
        piStack_124 = (int *)0x5615c3;
        puStack_120 = (undefined *)FUN_00402bc3();
        if ((int)puStack_120 < 0) {
          piStack_124 = (int *)0x5615ce;
          FUN_00878dfb();
        }
      }
      piVar8 = *(int **)(unaff_EBP + -0x10);
      if (piVar8 == (int *)0x0) {
        puStack_120 = (undefined *)0x80004003;
        piStack_124 = (int *)0x5615df;
        FUN_00878dfb();
        piVar8 = *(int **)(unaff_EBP + -0x10);
      }
      iVar5 = *piVar8;
      puStack_120 = (undefined *)0xffffff;
      piStack_124 = (int *)0x1;
      puStack_128 = (undefined4 *)0x1;
      uStack_12c = 0;
      iStack_130 = *(int *)(unaff_EBP + 0x1c);
      *(int **)(unaff_EBP + 0x24) = piVar8;
      puStack_138 = (undefined *)0x5615fe;
      piStack_134 = piVar8;
      iVar5 = (**(code **)(iVar5 + 0x8c))();
      if (iVar5 < 0) {
        puStack_138 = &DAT_00963cc8;
        piStack_13c = *(int **)(unaff_EBP + 0x24);
        iStack_144 = 0x561610;
        iStack_140 = iVar5;
        FUN_00878e09();
      }
      piStack_14c = *(int **)(unaff_EBP + -0x10);
      if (piStack_14c == (int *)0x0) {
        puStack_138 = (undefined *)0x80004003;
        piStack_13c = (int *)0x561621;
        FUN_00878dfb();
        piStack_14c = *(int **)(unaff_EBP + -0x10);
      }
      iVar5 = *piStack_14c;
      puStack_138 = (undefined *)0xffffff;
      piStack_13c = (int *)0x1;
      iStack_140 = 1;
      iStack_144 = *(int *)(unaff_EBP + 0x14) + -1;
      puStack_148 = *(undefined4 **)(unaff_EBP + 0x1c);
      *(int **)(unaff_EBP + 0x24) = piStack_14c;
      *(int *)(unaff_EBP + 0x30) = iStack_144;
      puStack_150 = (undefined *)0x56163e;
      iVar5 = (**(code **)(iVar5 + 0x8c))();
      if (iVar5 < 0) {
        puStack_150 = &DAT_00963cc8;
        piStack_154 = *(int **)(unaff_EBP + 0x24);
        FUN_00878e09();
      }
      piVar8 = *(int **)(unaff_EBP + -0x10);
      if (piVar8 == (int *)0x0) {
        puStack_150 = (undefined *)0x80004003;
        piStack_154 = (int *)0x561661;
        FUN_00878dfb();
        piVar8 = *(int **)(unaff_EBP + -0x10);
      }
      iVar5 = *piVar8;
      puStack_150 = (undefined *)0xffffff;
      piStack_154 = (int *)0x1;
      *(int **)(unaff_EBP + 0x14) = piVar8;
      *(int *)(unaff_EBP + 0x24) = *(int *)(unaff_EBP + 0x18) + -1;
      iVar5 = (**(code **)(iVar5 + 0x8c))();
      if (iVar5 < 0) {
        FUN_00878e09();
      }
      piVar8 = *(int **)(unaff_EBP + -0x10);
      if (piVar8 == (int *)0x0) {
        FUN_00878dfb();
        piVar8 = *(int **)(unaff_EBP + -0x10);
      }
      iVar5 = *piVar8;
      *(int **)(unaff_EBP + 0x14) = piVar8;
      iVar5 = (**(code **)(iVar5 + 0x8c))();
      if (iVar5 < 0) {
        piStack_184 = *(int **)(unaff_EBP + 0x14);
        piStack_18c = (int *)0x5616ca;
        puStack_188 = (undefined *)iVar5;
        FUN_00878e09();
      }
      piStack_184 = (int *)0x5616d3;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x52;
      piStack_184 = (int *)0x5616e0;
      FUN_00403191();
      piStack_184 = (int *)(unaff_EBP + -0x38);
      *(undefined1 *)(unaff_EBP + -4) = 0x53;
      puStack_188 = (undefined *)0x5616f4;
      puStack_188 = (undefined *)FUN_00449749();
      *(int ***)(unaff_EBP + 0x14) = &piStack_18c;
      FUN_00448a17(*(undefined4 *)(unaff_EBP + 8));
      uVar7 = 0;
      iVar5 = *(int *)(unaff_EBP + 0x1c) + 2;
      *(undefined1 *)(unaff_EBP + -4) = 0x53;
      FUN_004115d9(iVar5,0);
      FUN_00448e3a(iVar5,uVar7);
      *(undefined1 *)(unaff_EBP + -4) = 0x52;
      piStack_184 = (int *)0x56172c;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        piStack_184 = (int *)0x561737;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x49;
    }
    piStack_184 = (int *)0x561a30;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      piStack_184 = (int *)0x561a3b;
      FUN_00878dfb();
    }
    p_Var10 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -100) + 0x74)
    ;
    if (*(int *)(unaff_EBP + -0x40) == 0) {
      p_Var10 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
                (*(int *)(unaff_EBP + -100) + 0x70);
    }
    *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + 8) = p_Var10;
    piStack_184 = (int *)0x561a5a;
    FUN_00403191();
    piStack_184 = (int *)0x0;
    *(undefined1 *)(unaff_EBP + -4) = 0x55;
    puStack_188 = (undefined *)0x561a69;
    FUN_004031b7();
    bVar11 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x56;
    if (bVar11) {
      piStack_184 = (int *)0x561a7f;
      FUN_00878dfb();
    }
    piStack_184 = (int *)(unaff_EBP + -0x58);
    puStack_188 = (undefined *)0x0;
    piStack_18c = (int *)0x0;
    puVar3 = (undefined4 *)FUN_0042a39f(unaff_EBP + 0x14,0,0,0);
    piStack_184 = (int *)0x561aa7;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var10,(IBinding *)*puVar3);
    FUN_00412600();
    *(undefined1 *)(unaff_EBP + -4) = 0x55;
    piStack_184 = (int *)0x561abc;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      piStack_184 = (int *)0x561ac7;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x49;
    piStack_184 = (int *)0x561ad7;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      piStack_184 = (int *)0x561ae2;
      FUN_00878dfb();
    }
    piStack_184 = *(int **)(unaff_EBP + 0xc);
    puStack_188 = (undefined *)0x561aef;
    FUN_0040ee87();
    iVar5 = *(int *)p_Var10;
    *(undefined1 *)(unaff_EBP + -4) = 0x57;
    if (iVar5 == 0) {
      piStack_184 = (int *)0x561b01;
      FUN_00878dfb();
    }
    piVar8 = (int *)**(undefined4 **)(unaff_EBP + 8);
    iVar5 = *piVar8;
    piStack_18c = *(int **)(unaff_EBP + -0x58);
    puStack_188 = *(undefined **)(unaff_EBP + -0x54);
    piStack_184 = *(int **)(unaff_EBP + -0x50);
    *(int **)(unaff_EBP + 0x14) = piVar8;
    iVar5 = (**(code **)(iVar5 + 0xfc))(piVar8);
    if (iVar5 < 0) {
      FUN_00878e09(iVar5,*(undefined4 *)(unaff_EBP + 0x14),&DAT_00963df8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x49;
    iVar5 = FUN_00402bc3(unaff_EBP + -0x58);
    if (iVar5 < 0) {
      FUN_00878dfb(iVar5);
    }
    piVar8 = *(int **)(unaff_EBP + 8);
    if (*piVar8 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar2 = (int *)*piVar8;
    iVar5 = (**(code **)(*piVar2 + 0xb4))(piVar2,5);
    if (iVar5 < 0) {
      FUN_00878e09(iVar5,piVar2,&DAT_00963df8);
    }
    FUN_0040ee87(*(undefined4 *)(unaff_EBP + 0x10),1);
    iVar5 = *piVar8;
    *(undefined1 *)(unaff_EBP + -4) = 0x58;
    if (iVar5 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar8 = (int *)**(undefined4 **)(unaff_EBP + 8);
    iVar5 = *piVar8;
    *(int **)(unaff_EBP + 0x14) = piVar8;
    iVar5 = (**(code **)(iVar5 + 100))
                      (piVar8,*(undefined4 *)(unaff_EBP + -0x58),*(undefined4 *)(unaff_EBP + -0x54),
                       *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x4c));
    if (iVar5 < 0) {
      FUN_00878e09(iVar5,*(undefined4 *)(unaff_EBP + 0x14),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x49;
    iVar5 = FUN_00402bc3(unaff_EBP + -0x58);
    if (iVar5 < 0) {
      FUN_00878dfb(iVar5);
    }
    piVar8 = *(int **)(unaff_EBP + 8);
    if (*piVar8 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar8 = (int *)*piVar8;
    iVar5 = (**(code **)(*piVar8 + 0xe0))(piVar8,0xffffffff);
    if (iVar5 < 0) {
      puStack_e8 = (undefined1 *)0x561c0a;
      iStack_e4 = iVar5;
      piStack_e0 = piVar8;
      FUN_00878e09();
    }
    piStack_e0 = (int *)0x561c16;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x59;
    piStack_e0 = (int *)0x561c26;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x5a;
    piStack_e0 = (int *)0x561c36;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x5b;
    piStack_e0 = (int *)0x561c46;
    FUN_00424aee();
    *(undefined1 *)(unaff_EBP + -4) = 0x5c;
    piStack_e0 = (int *)0x561c53;
    FUN_00424aee();
    piStack_e0 = (int *)(unaff_EBP + -0xd8);
    iStack_e4 = unaff_EBP + -200;
    puStack_e8 = (undefined1 *)(unaff_EBP + -0x84);
    puStack_ec = (undefined1 *)(unaff_EBP + -0x58);
    puStack_f0 = *(undefined1 **)(unaff_EBP + -0x10);
    iStack_f4 = unaff_EBP + -0xa4;
    *(undefined1 *)(unaff_EBP + -4) = 0x5d;
    uStack_f8 = 0x561c88;
    FUN_00424e27();
    uStack_f8 = 0x561c8f;
    FUN_004250ac();
    piStack_e0 = (int *)0x561c9b;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      piStack_e0 = (int *)0x561ca6;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5c;
    piStack_e0 = (int *)0x561cb3;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      piStack_e0 = (int *)0x561cbe;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5b;
    piStack_e0 = (int *)0x561cce;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      piStack_e0 = (int *)0x561cd9;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5a;
    piStack_e0 = (int *)0x561ce9;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      piStack_e0 = (int *)0x561cf4;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x59;
    piStack_e0 = (int *)0x561d04;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      piStack_e0 = (int *)0x561d0f;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x49;
    piStack_e0 = (int *)0x561d1f;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      piStack_e0 = (int *)0x561d2a;
      FUN_00878dfb();
    }
    piStack_e0 = (int *)0x561d36;
    FUN_00424aee();
    *(undefined1 *)(unaff_EBP + -4) = 0x5e;
    piStack_e0 = (int *)0x561d43;
    FUN_00424aee();
    *(undefined1 *)(unaff_EBP + -4) = 0x5f;
    if (*(int *)(unaff_EBP + -0x40) == 0) {
      iStack_e4 = 2;
    }
    else {
      iStack_e4 = *(int *)(unaff_EBP + 0x2c) + 3;
    }
    piStack_e0 = (int *)(unaff_EBP + -0x58);
    puStack_e8 = (undefined1 *)((*(int *)(unaff_EBP + 0x18) + *(int *)(unaff_EBP + 0x1c)) / -2);
    puStack_ec = (undefined1 *)0x561d7a;
    FUN_00424e27();
    puStack_ec = (undefined1 *)0x561d81;
    FUN_00424f2f();
    *(undefined1 *)(unaff_EBP + -4) = 0x5e;
    piStack_e0 = (int *)0x561d8e;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      piStack_e0 = (int *)0x561d99;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x49;
    piStack_e0 = (int *)0x561da9;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      piStack_e0 = (int *)0x561db4;
      FUN_00878dfb();
    }
    FUN_004115d9();
    uVar7 = FUN_0040e53d();
    FUN_004125e6();
    FUN_004125e6();
    FUN_004497b5();
  }
  FUN_00412600();
  FUN_004125d9();
LAB_00561def:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar7;
}


