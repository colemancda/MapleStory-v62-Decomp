/* FUN_00638480 - 0x00638480 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00638480(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  undefined1 *puVar5;
  int extraout_ECX_03;
  int unaff_EBP;
  undefined1 *puStack_9c;
  undefined1 *puStack_98;
  undefined1 *puStack_94;
  int iStack_90;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  FUN_006398c8();
  puStack_94 = *(undefined1 **)(unaff_EBP + -0x34);
  iStack_90 = 0;
  puStack_9c = (undefined1 *)&puStack_94;
  *(undefined4 *)(puStack_94 + 0xc) = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 ***)(unaff_EBP + -0x2c) = &puStack_94;
  puStack_98 = (undefined1 *)0x3b4;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e();
  puStack_98 = (undefined1 *)(unaff_EBP + -0x78);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_9c = (undefined1 *)0x6384d7;
  FUN_0040263d();
  puStack_9c = (undefined1 *)0x6384de;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_94 = (undefined1 *)0x6384e9;
  iVar1 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x24) = iVar1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar1 != 0) {
    iStack_90 = 0x6384ff;
    iVar1 = FUN_00404b30();
    if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
      iStack_90 = 0x638510;
      FUN_00878dfb();
    }
  }
  iVar1 = unaff_EBP + -0x78;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_90 = 0x63851d;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    iStack_90 = 0x638528;
    FUN_00878dfb();
    iVar1 = extraout_ECX;
  }
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    puStack_98 = (undefined1 *)&iStack_90;
    *(int **)(unaff_EBP + -0x2c) = &iStack_90;
    puStack_94 = (undefined1 *)0x3ef;
    puStack_9c = (undefined1 *)0x638545;
    iStack_90 = iVar1;
    FUN_00679e4e();
    puStack_94 = (undefined1 *)(unaff_EBP + -0x68);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_98 = (undefined1 *)0x638555;
    FUN_0040263d();
    puStack_98 = (undefined1 *)0x63855c;
    iStack_90 = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    puStack_94 = (undefined1 *)0x638566;
    iVar1 = FUN_00412550();
    iVar2 = FUN_0063989a();
    *(uint *)(iVar2 + 0x14) = (uint)(iVar1 != 0);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_90 = 0x638588;
    iVar1 = unaff_EBP + -0x68;
    iVar2 = FUN_00402bc3();
    iStack_90 = iVar1;
    if (iVar2 < 0) {
      iStack_90 = 0x638593;
      FUN_00878dfb();
      iStack_90 = extraout_ECX_00;
    }
    puStack_98 = (undefined1 *)&iStack_90;
    *(int **)(unaff_EBP + -0x2c) = &iStack_90;
    puStack_94 = (undefined1 *)0xe80;
    puStack_9c = (undefined1 *)0x6385a7;
    FUN_00679e4e();
    puStack_94 = (undefined1 *)(unaff_EBP + -0x68);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_98 = (undefined1 *)0x6385b7;
    FUN_0040263d();
    puStack_98 = (undefined1 *)0x6385be;
    iStack_90 = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    puStack_94 = (undefined1 *)0x6385c8;
    iVar1 = FUN_00412550();
    iVar2 = FUN_0063989a();
    *(uint *)(iVar2 + 0x18) = (uint)(iVar1 != 0);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_90 = 0x6385ea;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_90 = 0x6385f5;
      FUN_00878dfb();
    }
    puStack_94 = &stack0xffffff74;
    *(undefined1 **)(unaff_EBP + -0x2c) = &stack0xffffff74;
    iStack_90 = 0x3b5;
    puStack_98 = (undefined1 *)0x638608;
    FUN_00679e4e();
    iStack_90 = unaff_EBP + -0x48;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_94 = (undefined1 *)0x638618;
    FUN_0040263d();
    puStack_94 = (undefined1 *)0x63861f;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    if (*(short *)(unaff_EBP + -0x48) != 8) {
LAB_006387ca:
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      do {
        FUN_0087a1b0();
        iStack_90 = *(int *)(unaff_EBP + -0x1c);
        puStack_94 = (undefined1 *)0x6387e0;
        iStack_90 = FUN_00412335();
        *(undefined1 **)(unaff_EBP + -0x20) = &stack0xffffff74;
        puStack_94 = (undefined1 *)0x6387ee;
        FUN_00402e8e();
        iStack_90 = unaff_EBP + -0x88;
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        puStack_94 = (undefined1 *)0x638801;
        FUN_0040263d();
        puStack_94 = (undefined1 *)0x638808;
        FUN_004048a4();
        iStack_90 = unaff_EBP + -0x28;
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        puStack_94 = (undefined1 *)0x638816;
        FUN_00412348();
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        iStack_90 = 0x638825;
        FUN_00417232();
        *(undefined1 *)(unaff_EBP + -4) = 0x1b;
        if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
          iStack_90 = 0x638836;
          (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        iStack_90 = 0x638846;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          iStack_90 = 0x638851;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          *(undefined4 *)(*(int *)(unaff_EBP + -0x34) + 0x10) = *(undefined4 *)(unaff_EBP + -0x1c);
          iStack_90 = unaff_EBP + 8;
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          puStack_94 = (undefined1 *)0x6389bb;
          FUN_00639a68();
          *(undefined1 *)(unaff_EBP + -4) = 5;
          iStack_90 = 0x6389c8;
          iVar1 = FUN_00402bc3();
          if (iVar1 < 0) {
            iStack_90 = 0x6389d3;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
            iStack_90 = 0x6389e4;
            (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          if (*(int *)(unaff_EBP + -0x34) != 0) {
            iStack_90 = 0x6389f5;
            FUN_00639956();
            *(undefined4 *)(unaff_EBP + -0x34) = 0;
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
            iStack_90 = 0x638a09;
            (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
          }
          uVar4 = 1;
          goto LAB_00638a79;
        }
        iStack_90 = 0x638867;
        uVar4 = FUN_00639984();
        *(undefined4 *)(unaff_EBP + -0x20) = uVar4;
        FUN_00639906();
        puStack_98 = (undefined1 *)&iStack_90;
        *(int **)(unaff_EBP + -0x30) = &iStack_90;
        puStack_94 = (undefined1 *)0x9a0;
        puStack_9c = (undefined1 *)0x638885;
        FUN_00679e4e();
        puStack_94 = (undefined1 *)(unaff_EBP + -0x68);
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        puStack_98 = (undefined1 *)0x638895;
        FUN_0040263d();
        puStack_98 = (undefined1 *)0x63889c;
        iStack_90 = FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        puStack_94 = (undefined1 *)0x6388a6;
        iVar1 = FUN_00412550();
        iVar2 = FUN_0063989e();
        *(uint *)(iVar2 + 4) = (uint)(iVar1 != 0);
        puVar5 = (undefined1 *)(unaff_EBP + -0x68);
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        iStack_90 = 0x6388c8;
        iVar1 = FUN_00402bc3();
        if (iVar1 < 0) {
          iStack_90 = 0x6388d3;
          FUN_00878dfb();
          puVar5 = extraout_ECX_02;
        }
        iStack_90 = 0;
        puStack_9c = (undefined1 *)&puStack_94;
        *(undefined1 ***)(unaff_EBP + -0x30) = &puStack_94;
        puStack_98 = (undefined1 *)0xbca;
        puStack_94 = puVar5;
        FUN_00679e4e();
        puStack_98 = (undefined1 *)(unaff_EBP + -0x58);
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        puStack_9c = (undefined1 *)0x6388f8;
        FUN_0040263d();
        puStack_9c = (undefined1 *)0x6388ff;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x1f;
        puStack_94 = (undefined1 *)0x63890a;
        iVar1 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x2c) = iVar1;
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        if (iVar1 != 0) {
          iStack_90 = 0x638920;
          iVar1 = FUN_00404b30();
          if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
            iStack_90 = 0x638931;
            FUN_00878dfb();
          }
        }
        iVar1 = unaff_EBP + -0x58;
        *(undefined1 *)(unaff_EBP + -4) = 0x21;
        iStack_90 = 0x63893e;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          iStack_90 = 0x638949;
          FUN_00878dfb();
          iVar1 = extraout_ECX_03;
        }
        if (*(int *)(unaff_EBP + -0x18) != 0) {
          puStack_94 = (undefined1 *)(unaff_EBP + -0x18);
          *(int **)(unaff_EBP + -0x30) = &iStack_90;
          puStack_98 = (undefined1 *)0x638963;
          iStack_90 = iVar1;
          FUN_00424dbc();
          puStack_94 = (undefined1 *)0x638968;
          iVar1 = FUN_00638a8e();
          piVar3 = *(int **)(unaff_EBP + -0x18);
          *(undefined1 *)(unaff_EBP + -4) = 0x1a;
          if (iVar1 == 0) goto LAB_00638a0e;
          if (piVar3 != (int *)0x0) {
            iStack_90 = 0x638983;
            (**(code **)(*piVar3 + 8))();
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
          iStack_90 = 0x638994;
          (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
        }
        *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
      } while( true );
    }
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    iStack_90 = unaff_EBP + -0x20;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    puStack_94 = (undefined1 *)0x638645;
    piVar3 = (int *)FUN_00679d86();
    iStack_90 = *piVar3;
    puStack_94 = (undefined1 *)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    puStack_98 = (undefined1 *)0x638658;
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      iStack_90 = 0x63866f;
      FUN_00403384();
    }
    iStack_90 = 0x63867e;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_90 = 0x63868b;
    FUN_00403191();
    iStack_90 = 0;
    puStack_94 = (undefined1 *)(unaff_EBP + -0x68);
    puStack_98 = (undefined1 *)(unaff_EBP + -0x58);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    puStack_9c = (undefined1 *)0x6386a1;
    uVar4 = FUN_00411641();
    *(undefined1 ***)(unaff_EBP + -0x2c) = &puStack_9c;
    puStack_9c = extraout_ECX_01;
    FUN_004033a1(uVar4);
    iVar1 = unaff_EBP + -0x88;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    FUN_00405a1d(iVar1);
    FUN_00402660();
    FUN_00404a02(iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    puStack_94 = (undefined1 *)0x6386d6;
    iVar1 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x20) = iVar1;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    if (iVar1 != 0) {
      iStack_90 = 0x6386ec;
      iVar1 = FUN_00404b30();
      if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
        iStack_90 = 0x6386fd;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iStack_90 = 0x63870d;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_90 = 0x638718;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    iStack_90 = 0x638725;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_90 = 0x638730;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iStack_90 = 0x63873d;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_90 = 0x638748;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      iStack_90 = 0x6387ad;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + 0xc),
                 *(IBinding **)(unaff_EBP + -0x14));
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
        iStack_90 = 0x6387be;
        (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      FUN_00402676();
      goto LAB_006387ca;
    }
    FUN_004027eb();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      iStack_90 = 0x638769;
      FUN_00403384();
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_90 = 0x638777;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_90 = 0x638782;
      FUN_00878dfb();
    }
  }
  FUN_004027eb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_006398f0();
  FUN_004027eb();
  goto LAB_00638a77;
LAB_00638a0e:
  if (piVar3 != (int *)0x0) {
    iStack_90 = 0x638a18;
    (**(code **)(*piVar3 + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    iStack_90 = 0x638a29;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_90 = 0x638a36;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_90 = 0x638a41;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_90 = 0x638a52;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x34) != 0) {
    iStack_90 = 0x638a63;
    FUN_00639956();
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
    iStack_90 = 0x638a77;
    (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
  }
LAB_00638a77:
  uVar4 = 0;
LAB_00638a79:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


